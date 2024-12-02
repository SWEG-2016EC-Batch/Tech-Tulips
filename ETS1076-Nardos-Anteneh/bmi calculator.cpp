#include <iostream>
using namespace std;

int main() {
    double weight, height, bmi; // Variables for weight, height, and BMI
    char choice; // Variable to check if user wants to continue

    do {
        // Getting user input for weight and height
        cout << "Enter weight (in kilograms): ";
        cin >> weight;

        cout << "Enter height (in meters): ";
        cin >> height;

        // Handling invalid input
        if (weight <= 0 || height <= 0) {
            cout << "Error: Weight and height must be positive numbers." << endl;
        } else {
            // Calculating BMI
            bmi = weight / (height * height);
            cout << "Your BMI is: " << bmi << endl;

            // Categorizing BMI
            if (bmi < 18.5) {
                cout << "Category: Underweight" << endl;
            } else if (bmi < 24.9) {
                cout << "Category: Normal weight" << endl;
            } else {
                cout << "Category: Overweight" << endl;
            }
        }

        // Ask if the user wants to continue
        cout << "Do you want to calculate BMI for another person? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y'); // Loop if the user says 'y'

    cout << "Goodbye!" << endl; // End message
    return 0;
}
