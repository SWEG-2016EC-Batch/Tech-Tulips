# System Design for Employee Salary Calculation
## Input

**Employee Name (employeeName):** String data type, representing the name of the employee.

**Weekly Working Hours (weeklyHour):** Double data type, representing the number of hours worked per week.

**Bonus Rate per Hour (bonusRate):** Double data type, representing the bonus rate per hour.

**Base Salary (baseSalary):** Double data type, representing the base salary of the employee.

## Output

**Bonus Payment (bonusPayment):** Double data type, representing the total bonus payment.

**Gross Salary (grossSalary):** Double data type, representing the total gross salary.

**Pension Deduction (pensionDeduction):** Double data type, representing the deduction for pension.

**Tax Deduction (taxDeduction):** Double data type, representing the deduction for tax.

**Net Salary (netSalary):** Double data type, representing the total net salary.

## Operation

**Bonus Payment Calculation:** Use the formula bonusPayment = weeklyHour * bonusRate

to calculate the total bonus payment.

**Gross Salary Calculation:** Use the formula grossSalary = baseSalary + bonusPayment

to calculate the gross salary.

**Pension Deduction Calculation:** Use the formula pensionDeduction = grossSalary * pensionRate

to calculate the pension deduction.

**Tax Deduction Calculation:** Use the formula taxDeduction = grossSalary * taxRate 

to calculate the tax deduction.

**Net Salary Calculation:** Use the formula netSalary = grossSalary - pensionDeduction - taxDeduction

to calculate the net salary.

## Pseudo Code

**Start the program.**

**Declare variables:** employeeName as string, weeklyHour, bonusRate, baseSalary, bonusPayment, grossSalary, pensionDeduction, taxDeduction, netSalary as double.

**Declare constants:** 
pensionRate = 0.05, taxRate = 0.15.

**Prompt the user to input the employee's name.**
Input the value of employeeName.

If the input for employeeName is invalid, then

  Output: "Invalid input."
    Stop the program.

**Prompt the user to input the weekly working hours.**
Input the value of weeklyHour.

If the input for weeklyHour is invalid (not a positive number), then

  Output: "Invalid input. Please enter a positive number!"
  
  Stop the program.

**Prompt the user to input the bonus rate per hour.**
Input the value of bonusRate.

If the input for bonusRate is invalid (not a positive number), then

  Output: "Invalid input. Please enter a positive number!"
 
  Stop the program.

**Prompt the user to input the base salary.**
Input the value of baseSalary.

If the input for baseSalary is invalid (not a positive number), then

   Output: "Invalid input. Please enter a positive number!"
   
   Stop the program.

**Calculate bonusPayment using**
bonusPayment = weeklyHour * bonusRate.

**Calculate grossSalary using**
grossSalary = baseSalary + bonusPayment.

**Calculate pensionDeduction using** pensionDeduction = grossSalary * pensionRate.

**Calculate taxDeduction using** taxDeduction = grossSalary * taxRate.

**Calculate netSalary**
using netSalary = grossSalary - pensionDeduction - taxDeduction.

**Output**

the employee's name, bonus payment, gross salary, and net salary.

**Stop the program.**

# FlowChart

```mermaid
graph TD
    A([Start Program]) --> B[/"Enter employee's name"/]
    B --> C{Is employeeName valid?}
    C -- No --> D[/Output: "Invalid input."/] --> Z([End])
    C -- Yes --> E[/"Enter weekly working hours"/]
    E --> F{Is weeklyHour valid?}
    F -- No --> G[/Output: "Invalid input. Please enter a positive number!"/] --> Z([End])
    F -- Yes --> H[/"Enter bonus rate per hour"/]
    H --> I{Is bonusRate valid?}
    I -- No --> J[/Output: "Invalid input. Please enter a positive number!"/] --> Z([End])
    I -- Yes --> K[/"Enter base salary"/]
    K --> L{Is baseSalary valid?}
    L -- No --> M[/Output: "Invalid input. Please enter a positive number!"/] --> Z([End])
    L -- Yes --> N["Calculate bonusPayment = weeklyHour * bonusRate"]
    N --> O["Calculate grossSalary = baseSalary + bonusPayment"]
    O --> P["Calculate pensionDeduction = grossSalary * 0.05"]
    P --> Q["Calculate taxDeduction = grossSalary * 0.15"]
    Q --> R["Calculate netSalary = grossSalary - pensionDeduction - taxDeduction"]
    R --> S[/"Print 'Employee's name is: ' + employeeName"/]
    S --> T[/"Print 'Bonus payment is: ' + bonusPayment"/]
    T --> U[/"Print 'Gross salary is: ' + grossSalary"/]
    U --> V[/"Print 'Net salary is: ' + netSalary"/]
    V --> W([End])

```
