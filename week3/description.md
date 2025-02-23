# This is the folder where my work for the week 3 will be stored

## Combinational logic

1) Memoryless operation.   
2) Instantaneous response.
3) No feedback loops.

## Basic building blocks

AND, OR, NOT, NAND, NOR

it is possilbe to mimick all the logic circuits only with NAND gates

## Representing combinational logic

1) Boolean Algebra
2) Truth Table
3) Logic Diagram

## Examples of combinational logic circuits

1) Decoder (2 bit number -> one of 4 possible inputs)
2) Multiplexer (selects one of the many inputs)
3) Adder (circuits that adds binary numbers)

## Conclusion

Combinational logic circuits are essential in digital electronics, providing the foundation for decision-making processes in computers and other digital systems. Understanding how they work is crucial for anyone interested in electronics, as these circuits are used everywhere, from simple calculators to complex computer processors.

# Step-by-step design of the 1-bit half adder

## Step 1. Understanding the problem

given two bits A and B find their sum and carry

1) Sum (S): adding the A and B
2) Carry (Cout): the value that needs to be added to next bit if this bit overflows

## Step 2. Truth table

    A   B   S   Cout
    0   0   0   0
    0   1   1   0
    1   0   1   0
    1   1   0   1

## Step 3. Derive the Boolean Expression Using AND, OR, NOT

1) S = (A and not(B)) or (not(A) and B)
2) C = A and B

## Step 4. Build the circuit

Just take 2 AND gates and 1 OR gate to implement the sum (S).
Then add another AND gate and plug inputs A, B parallel to it to get the carry (Cout).
And you will get the 1-bit half adder.

# Sequential Logic. Definition

## Key Characteristics

1) Memory Elements (D-latches or flip-flops to store memory)
2) Feedback Loops (its output is fed back to input to contain the state)
3) Dependance on clock signals (usually sequential logic circuits are synchronous)
4) State-based operations (output depends not only on input but also on state and clock)

