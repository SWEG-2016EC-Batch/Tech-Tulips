# BMI Calculator Program

### Purpose
This program calculates the **Body Mass Index (BMI)** using the user's weight and height.

---

### Algorithm
1. Start.
2. Ask the user to input their weight (in kilograms).
3. Ask the user to input their height (in meters).
4. Use the formula: `BMI = Weight / (Height * Height)` to calculate BMI.
5. Display the calculated BMI.
6. Stop.

---

### Code
```cpp
// BMI Calculator Program
#include <iostream>
using namespace std;

int main() {
    float weight, height, bmi;

    // Ask for weight and height
    cout << "Enter your weight (in kg): ";
    cin >> weight;
    cout << "Enter your height (in meters): ";
    cin >> height;

    // Calculate BMI
    bmi = weight / (height * height);

    // Display result
    cout << "Your BMI is: " << bmi << endl;

    return 0;
}
