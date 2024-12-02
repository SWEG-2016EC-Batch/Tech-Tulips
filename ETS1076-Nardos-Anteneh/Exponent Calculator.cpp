#include <iostream>
#include <cmath>  // For pow() to do the power calculation

using namespace std;

int main() {
    double x, y, result;

    // Ask the user for the base and exponent values
    cout << "Hey! Enter the base (x): ";
    cin >> x;
    cout << "Now, enter the exponent (y): ";
    cin >> y;

    // Calculate x raised to the power of y
    result = pow(x, y);

    // Show the result
    cout << x << " raised to the power of " << y << " is: " << result << endl;

    return 0;
}
