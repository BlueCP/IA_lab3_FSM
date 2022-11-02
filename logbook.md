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
- In f1_fsm, trigger is an input which sets the next state to S1 if the current state is S0. Otherwise, it will stay on S0 indefinitely. This means that trigger is needed to start the state machine.
- In f1_fsm, the logic to set the current state to the next state must activate if en=1 or if trigger=1. Because en=0 when the current state is S0, we rely on trigger to start the sequence. After this, en is used to determine whether to update the state.
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