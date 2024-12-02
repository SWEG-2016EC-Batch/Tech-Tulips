#include <iostream>
using namespace std;

int main() {
    double tankCapacity, milesPerGallon, totalMiles;

    cout << "Enter the fuel tank capacity (in gallons): ";
    cin >> tankCapacity;

    cout << "Enter the miles per gallon (mpg) the car can travel: ";
    cin >> milesPerGallon;

    // Calculate total miles that can be driven without refueling
    totalMiles = tankCapacity * milesPerGallon;

    cout << "The car can travel " << totalMiles << " miles without refueling." << endl;

    return 0;
}
