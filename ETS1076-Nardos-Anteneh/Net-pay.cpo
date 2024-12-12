#include <iostream>
using namespace std;

int main() {
    double basic_salary, hours_wrkd, bonusRate, overtime_rate = 0, grossPay, netPay, taxRate, tax, pension;

    cout << "Enter basic salary: ";
    cin >> basic_salary;

    cout << "Enter worked hours: ";
    cin >> hours_wrkd;

    cout << "Enter bonus rate (%): ";
    cin >> bonusRate;

    if (hours_wrkd > 40) {
        cout << "Enter overtime rate/hour: ";
        cin >> overtime_rate;
    }

    double overtimePay = 0;
    if (hours_wrkd > 40) {
        overtimePay = (hours_wrkd - 40) * overtime_rate;
    }

    grossPay = basic_salary + (basic_salary * (bonusRate / 100)) + overtimePay;
    pension = grossPay * 0.07;

    if (grossPay <= 10000) taxRate = 10;
    else if (grossPay <= 20000) taxRate = 15;
    else if (grossPay <= 30000) taxRate = 20;
    else taxRate = 25;

    tax = grossPay * (taxRate / 100);
    netPay = grossPay - pension - tax;

    cout << "Net Pay: " << netPay << endl;

    return 0;
}
