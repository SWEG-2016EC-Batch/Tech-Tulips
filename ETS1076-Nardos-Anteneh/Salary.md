# Question 5: Salary Calculation Program

### Problem:
Design an algorithm and write a program that reads an employee's name, weekly working hours, bonus rate per hour, and base salary. The program should then calculate the **gross salary**, **net salary**, and **bonus payment** for the employee.

### Pseudo-code:

1. Start
2. Ask for employee name.
3. Ask for weekly working hours.
4. Ask for bonus rate per hour.
5. Ask for base salary.
6. Calculate **Gross Salary** = Base Salary + (Weekly Hours * Bonus Rate per Hour).
7. Calculate **Pension Deduction** = 5% of Gross Salary.
8. Calculate **Tax Deduction** = 15% of Gross Salary.
9. Calculate **Net Salary** = Gross Salary - (Pension Deduction + Tax Deduction).
10. Output **Gross Salary**, **Pension Deduction**, **Tax Deduction**, and **Net Salary**.
11. End

### C++ Code:
```cpp
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