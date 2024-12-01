// This program is used to determine  the expression like X^Y in computers.

#include <iostream>
#include <cmath>  // For the pow function
using namespace std;

int main() {
    // Declare variables
    double x, y, result;

    // Input values from the user
    cout << "Enter the value of x: ";
    cin >> x;

    cout << "Enter the value of y: ";
    cin >> y;

    // Calculate x^y using the pow function from the cmath library
    result = pow(x, y);

    // Display the result
    cout << "Result of " << x << "^" << y << " is: " << result << endl;

    return 0;
}
