# Fuel Tank Capacity Program

## Purpose
This program calculates whether a given volume of fuel can fit into a tank with a specified capacity.

---

## Algorithm
1. Start.
2. Prompt the user to input the fuel tank's capacity.
3. Prompt the user to input the amount of fuel to check.
4. Compare the fuel amount with the tank's capacity:
   - If the fuel amount is less than or equal to the capacity, print "The fuel will fit."
   - Otherwise, print "The fuel will overflow."
5. Stop.

---

## Code
```cpp
// Fuel Tank Capacity Program
#include <iostream>
using namespace std;

int main() {
    float tankCapacity, fuelAmount;

    // Ask for tank capacity and fuel amount
    cout << "Enter the tank capacity (in liters): ";
    cin >> tankCapacity;
    cout << "Enter the amount of fuel (in liters): ";
    cin >> fuelAmount;

    // Check if the fuel fits
    if (fuelAmount <= tankCapacity) {
        cout << "The fuel will fit in the tank." << endl;
    } else {
        cout << "The fuel will overflow." << endl;
    }

    return 0;
}
