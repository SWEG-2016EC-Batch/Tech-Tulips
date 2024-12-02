# Question 2: Automobile Fuel Efficiency Program

### Problem:
Write a program that prompts the capacity in gallons of an automobile fuel tank and the miles per gallon the automobile can be driven. The program should then output the number of miles the automobile can be driven without refueling.

### Pseudo-code:

1. Start
2. Prompt the user to input the fuel tank capacity (in gallons).
3. Prompt the user to input the miles the automobile can drive per gallon.
4. Calculate **Miles to Drive** = Fuel tank capacity * Miles per gallon.
5. Output the result: "The automobile can drive [Miles] miles without refueling."
6. End

### C++ Code:

```cpp
#include <iostream>
using namespace std;

int main() {
    // Declare variables for fuel tank capacity and miles per gallon
    double tankCapacity, milesPerGallon, milesToDrive;

    // Prompt the user for input
    cout << "Enter the fuel tank capacity in gallons: ";
    cin >> tankCapacity;

    cout << "Enter the number of miles the automobile can drive per gallon: ";
    cin >> milesPerGallon;

    // Calculate the number of miles the automobile can drive without refueling
    milesToDrive = tankCapacity * milesPerGallon;

    // Output the result
    cout << "The automobile can drive " << milesToDrive << " miles without refueling." << endl;

    return 0;
}
