This program helps you calculate the net pay of an employee after deducting pension (7%) and applying tax. It also handles overtime if the employee works more than 40 hours a week

 Inputs
- Basic Salary:The fixed amount the employee earns.
- Worked Hours:How many hours they worked in a week.
- Bonus Rate: A percentage-based bonus on their basic salary.
- Overtime Rate: (If they worked more than 40 hours) How much extra they earn per hour.

 Outputs
- Gross Pay: total income before deductions.
- Pension Deduction: 7% of the gross pay.
- Tax Deduction: Based on tax brackets.
- net Pay:The take-home salary after all deductions.
  

Pseudocode 

1. Start the program.
2. Ask for:
   - Basic salary.
   - Worked hours.
   - Bonus rate.
3. If worked hours > 40:
   - Ask for the overtime rate.
   - Calculate overtime pay.
   - Otherwise, set overtime pay to 0.
4. Calculate:
   - Bonus = Basic Salary × (Bonus Rate ÷ 100).
   - Gross Pay = Basic Salary + Bonus + Overtime Pay.
   - Pension = 7% of Gross Pay.
   - Tax (based on Gross Pay):
     - 10% for Gross Pay ≤ 10,000.
     - 15% for Gross Pay ≤ 20,000.
     - 20% for Gross Pay ≤ 30,000.
     - 25% for Gross Pay > 30,000.
   - Net Pay = Gross Pay - Pension - Tax.
5. Display Net Pay.
6. Done!

Flow chart:
