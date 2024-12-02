# System Design for Automobile Distance Calculation
## Input

**Capacity in gallons(capacity_in_gallon):** Float data type, representing the capacity of the automobile's fuel tank in gallons.

**Miles per gallon (miles_per_gallon):** Float data type, representing the fuel efficiency of the automobile in miles per gallon.

## Output

**Number of miles driven(number_mile_driven):** 
Float data type, representing the number of miles the automobile can be driven without refueling.

## Operation

**Distance Calculation: Use the formula**
number_mile_driven =capacity_in_gallon * miles_per_gallon 
to calculate the number of miles the automobile can be driven without refueling.

## Pseudo Code

**Start the program.**

**Declare variables:**
capacity_in_gallon, miles_per_gallon, and number_mile_driven as float.

**Prompt the user to input the capacity in gallons of the automobile fuel tank.**
Input the value of capacity_in_gallon.

If the input for capacity_in_gallon is invalid (not a positive number), then
    Output: "Invalid input. Please enter a positive number!"
    Stop the program.

**Prompt the user to input the miles per gallon the automobile can be driven.**
Input the value of miles_per_gallon.

If the input for miles_per_gallon is invalid (not a positive number),then
    
Output: "Invalid input. Please enter a positive number!"

Stop the program.

**Calculate number_mile_driven using number_mile_driven**= capacity_in_gallon * miles_per_gallon.

**Output** the number of miles the automobile can be driven without refueling.

**Stop the program.**
