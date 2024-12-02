#include<iostream>
using namespace std;
int main () {
    float fuel_tank_capacity;
    float miles_per_gallon;
    float num_miles;
    cout << "Enter Your car fuel tank capacity in gallon: " << endl;
    cin >> fuel_tank_capacity;
    cout << "Enter the miles per gallon your car can be driven: " << endl;
    cin >> miles_per_gallon;
    num_miles = fuel_tank_capacity*miles_per_gallon;
    cout << "Your car can be driven "<< num_miles << " without refeuling.";

}
