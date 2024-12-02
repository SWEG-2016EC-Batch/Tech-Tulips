# System Design for Fuel Efficiency Calculator

## Input
1. **Gallons of Fuel**: Float data type
2. **Capacity (miles per gallon)**: Float data type

## Output
1. **Miles**: Float data type

## Operation
1. **Multiplication**: Calculate the miles by multiplying the gallons of fuel by the capacity (miles per gallon).
2. **Input Validation**: Check if the user input is valid using `cin.fail()`.

## Pseudo Code

1. **Start** the program.
2. **Declare** `gallon`, `miles`, and `capacity` using `float` data type.
3. **Prompt** the user to input the amount of gallons of fuel.
4. **Take** the input for `gallon` and store it in the `gallon` variable.
5. **Check** if the input for `gallon` is valid using `cin.fail()`. If invalid, print an error message and stop the program.
6. **Prompt** the user to input the capacity of the automobile (miles per gallon).
7. **Take** the input for `capacity` and store it in the `capacity` variable.
8. **Check** if the input for `capacity` is valid using `cin.fail()`. If invalid, print an error message and stop the program.
9. **Calculate** the miles by multiplying the `gallon` by `capacity` and store the result in `miles`.
10. **Print** the result as `You can drive ` + `miles` + ` miles without refueling`.
11. **Stop** the program.

## Flowchart
![Blank diagram (6)](https://github.com/user-attachments/assets/edec01de-41ca-4cf8-9f66-f962effae182)

