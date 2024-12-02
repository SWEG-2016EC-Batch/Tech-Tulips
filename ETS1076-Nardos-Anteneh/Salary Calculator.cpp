#include <iostream>
#include <string>

using namespace std;

int main() {
    // Declare variables
    string name;
    double weeklyHours, bonusRate, baseSalary;
    double grossSalary, pensionDeduction, taxDeduction, netSalary;

    // Input employee details
    cout << "Enter employee name: ";
    getline(cin, name);

    cout << "Enter weekly working hours: ";
    cin >> weeklyHours;

    cout << "Enter bonus rate per hour: ";
    cin >> bonusRate;

    cout << "Enter base salary: ";
    cin >> baseSalary;

    // Calculate gross salary
    grossSalary = baseSalary + (weeklyHours * bonusRate);

    // Calculate pension deduction (5% of gross salary)
    pensionDeduction = 0.05 * grossSalary;

    // Calculate tax deduction (15% of gross salary)
    taxDeduction = 0.15 * grossSalary;

    // Calculate net salary (gross salary minus pension and tax deductions)
    netSalary = grossSalary - (pensionDeduction + taxDeduction);

    // Output the results
    cout << "\nEmployee Name: " << name << endl;
    cout << "Gross Salary: $" << grossSalary << endl;
    cout << "Pension Deduction: $" << pensionDeduction << endl;
    cout << "Tax Deduction: $" << taxDeduction << endl;
    cout << "Net Salary: $" << netSalary << endl;

    return 0;
}
