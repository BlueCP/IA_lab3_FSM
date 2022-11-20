# Task 1

Creation of linear feedback shift register proceeded without issue. Challenge required a slight modification of lfsr.sv. Instead of having out[0] = out[2] ^ out[3], instead we have out[0] = ~(out[2] ^ out[6]), since adding 1 has the effect of negating the value.

# Task 2

The Moore FSM was implemented according to the instructions, and worked without issue. There was a choice of where to consider the enable signal: either in the logic updating the current state to the next state, or in the logic determining the next state itself. To simplify the code, the former option was chosen. In the case that en=0, the current state is simply not updated.

# Task 3

The shell script clktick.sh had to be converted from CRLF to LF line endings in line with the Unix convention. Perfect synchronisation was between the Vbuddy internal values of 31 and 32, with 31 being slightly too fast and 32 being slightly too slow. However, 31 was closer to the ideal.

## Challenge

The two components, clktick and f1_fsm, were connected in a top-level component, with the testbench containing elements of both previous testbenches.

A mistake had been made in the previous part; because the light state was programmed to change every tick, the value of 31 actually corresponded to two ticks per second (for two light transitions). Recalibrating showed that the correct value was 64 - roughly double. Discrepancies can be attributed to the limits of human perception and non-linearities in the processor. In addition, the period of the tick is actually n+1 cycles, so 32 and 65 cycles respectively, uniting the two values more closely.

However, when running the testbench for the combined component, it was found to perform slower than expected. To achieve a state transition every second, a value of 50 was needed. This can be attributed to the more complex circuit and therefore more complex simulation requiring more time per cycle, so as to require compensation by increasing the frequency of the tick.

# Task 4

Some notes on the FSM:
- In f1_fsm, trigger is an input which can act like an enable, in that it updates the current state to the next state. However, it only does this if the current state is S0. It is incorporated into the logic that updates the state, so that the new condition for updating the state is en | (trigger & currentState == S0).
- Trigger was implemented in this way so that if the state is not S0, trigger will do nothing. Implementing it in a way where it determines the next state if the current state is S0, and then replacing the en condition with en | trigger will have the desired effect for the most part, but will also cause the state to update whenever trigger is pressed, which I did not want.
- In f1_fsm, the logic to set the current state to the next state must activate if en=1 or if trigger=1. Because en=0 when the current state is S0, we rely on trigger to start the sequence. After this, en is used to determine whether to update the state (and trigger has no effect).
- In f1_fsm, cmd_seq is true if the current state is not S0 or S8. If the current state is S0, we want it to stay there indefinitely until trigger is asserted. If the current state is S8, then we want en to be dependent on delay.sv, not clktick.sv.
- In f1_fsm, cmd_delay is true if the current state is S8, at which point the pseudorandom delay will begin.
- lfsr.en is always set to 1 so it will keep cycling through random numbers. This maximises the apparent randomness on each instantiation of the state machine.

When implementing this circuit, the top-level component involved a mixture of both structural and behavioural description. The new behaviour description was the conditional statement representing the multiplexer.

During testing, there were many instances where the simulation would crash at seemingly random points. The error shown was as follows:

```
terminate called after throwing an instance of 'std::out_of_range'
what():  basic_string::erase: __pos (which is 18446744073709551615) > this->size() (which is 3)
Aborted (core dumped)
```

There was no observable pattern to these crashes.

After asking for assistance, it was found that this was a hardware issue with Vbuddy that was as-of-yet unresolved. It was not a fatal issue, but it did make testing more time-consuming.

At the end, I decided to add a bcd converter to display the reaction time in decimal rather than hex. Since the reaction time test was done purely in the testbench, I decided to code the bcd converter into the testbench as well rather than using the bin2bcd.sv component from a previous lab. This was done by dividing by a power of 10, then taking the modulus with 10 (to find the LS decimal digit).