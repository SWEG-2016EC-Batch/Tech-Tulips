#include <iostream>
using namespace std;
int main () {
    string name;
    float work_hrs, bonus_rate, base_salary, gross_salary, tax, pension, net_salary, bonus;
    cout << "Enter Employee name: "<< endl;
    cin >> name;
    cout << "Enter Weakly working hours: "<< endl;
    cin >> work_hrs;
    cout << "Enter bonus rate per hour: " << endl;
    cin >> bonus_rate;
    cout << "Enter base salary: " << endl;
    cin >> base_salary;
    bonus= work_hrs*bonus_rate;
    gross_salary= base_salary+ bonus;
    tax= gross_salary*0.15;
    pension= gross_salary* 0.05;
    net_salary= gross_salary- (tax + pension);
    cout << name<< endl;
    cout << "Gross salary is: "<< gross_salary << endl;
    cout << "Net salary is: "<< net_salary << endl;
    cout << "Bonus payment is: "<< bonus << endl;



}
