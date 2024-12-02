#include<iostream>
using namespace std;
int main () {
    float Weight;
    float Height;
    float BMI;
    int people_num;
    cout << "Enter the number of people: ";
    cin >> people_num;
    for (int j=1; j<= people_num; ++j) {
    cout << "Please Enter your Weight in kg: "<< endl;
    cin>> Weight;
       
    cout << "Please Enter your Height in m: " << endl;
    cin >> Height;
    
    BMI = Weight/ (Height*Height);
     cout << "Your BMI is: "<< BMI << endl;
    if (BMI < 18.5 ) {
        cout << "Underweight" << endl;
    } else if (BMI >= 18.5 && BMI < 24.9) {
        cout << "Normal Weight" << endl;
    } else {
        cout << "Overweight" << endl;
    }
    }
