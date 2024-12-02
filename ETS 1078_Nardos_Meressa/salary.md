


## Input
1. baseSalary: The employee's base salary (double).
2. weeklyHours: The number of weekly working hours (float).
3. bonusRate: The bonus rate per hour (double).

---

## Process
1. Prompt the user to enter the base salary (baseSalary).
2. Prompt the user to enter the weekly working hours (weeklyHours).
3. Prompt the user to enter the bonus rate per hour (bonusRate).
4. Calculate the bonus payment:
   \[
   \text{bonusPayment} = \text{weeklyHours} \times \text{bonusRate}
   \]
5. Calculate the gross salary:
   \[
   \text{grossSalary} = \text{baseSalary} + \text{bonusPayment}
   \]
6. Calculate the pension deduction:
   \[
   \text{pensionDeduction} = \text{grossSalary} \times 0.05
   \]
7. Calculate the tax deduction:
   \[
   \text{taxDeduction} = \text{grossSalary} \times 0.15
   \]
8. Calculate the net salary:
   \[
   \text{netSalary} = \text{grossSalary} - (\text{pensionDeduction} + \text{taxDeduction})
   \]
9. Display the gross salary, pension deduction, tax deduction, net salary, and bonus payment.

---

## Output
1. grossSalary: The total salary before deductions
## Pseudocode

1. Start
2. Declare variables:
   - weeklyHours as float (weekly working hours).
   - bonusRate as double (bonus rate per hour).
   - baseSalary as double (base salary).
   - pensionRate as double, initialized to 0.05 (pension deduction rate).
   - taxRate as double, initialized to 0.15 (tax deduction rate).
   - bonusPayment, grossSalary, pensionDeduction, taxDeduction, netSalary as double.
3. Print "Enter base salary:"
4. Input baseSalary.
5. Print "Enter weekly working hours:"
6. Input weeklyHours.
7. Print "Enter bonus rate per hour:"
8. Input bonusRate.
9. Calculate bonusPayment as:
   \[
   \text{bonusPayment} = \text{weeklyHours} \times \text{bonusRate}
   \]
10. Calculate grossSalary as:
    \[
    \text{grossSalary} = \text{baseSalary} + \text{bonusPayment}
    \]
11. Calculate pensionDeduction as:
    \[
    \text{pensionDeduction} = \text{grossSalary} \times \text{pensionRate}
    \]
12. Calculate taxDeduction as:
    \[
    \text{taxDeduction} = \text{grossSalary} \times \text{taxRate}
    \]
13. Calculate netSalary as:
    \[
    \text{netSalary} = \text{grossSalary} - (\text{pensionDeduction} + \text{taxDeduction})
    \]
14. Print "Gross Salary: $", grossSalary.
15. Print "Pension Deduction: $", pensionDeduction.
16. Print "Tax Deduction: $", taxDeduction.
17. Print "Net Salary: $", netSalary.
18. Print "Bonus Payment: $", bonusPayment.
19. End



# flow chart
```mermaid
graph TD
    A([Start Program]) --> B[/"Enter base salary"/]
    B --> C[/Input base_salary/]
    C --> D[/"Enter weekly working hours"/]
    D --> E[/Input weeklyHours/]
    E --> F[/"Enter bonus rate per hour"/]
    F --> G[/Input bonusRate/]
    G --> H["Calculate bonusPayment = weeklyHours * bonusRate"]
    H --> I["Calculate grossSalary = baseSalary + bonusPayment"]
    I --> J["Calculate pensionDeduction = grossSalary * 0.05"]
    J --> K["Calculate taxDeduction = grossSalary * 0.15"]
    K --> L["Calculate netSalary = grossSalary - (pensionDeduction + taxDeduction)"]
    L --> M[/"Print 'Gross Salary: ' + grossSalary"/]
    M --> N[/"Print 'Pension Deduction: ' + pensionDeduction"/]
    N --> O[/"Print 'Tax Deduction: ' + taxDeduction"/]
    O --> P[/"Print 'Net Salary: ' + netSalary"/]
    P --> Q[/"Print 'Bonus Payment: ' + bonusPayment"/]
    Q --> R([End Program])
```
