Net Pay Calculator 

This program is designed to help you calculate an employee’s net pay after deductions for pension(7%) and taxes based on income. It also calculates overtime pay if the employee works more than 40 hours. 


 Input
- Basic Salary: The regular salary the employee gets.
- Worked Hours: Total hours worked in a week (so we can figure out if there's overtime).
- Bonus Rate: A percentage of the basic salary as a bonus.
- Overtime Rate: (Only needed if worked hours exceed 40) This is how much extra the employee gets paid per hour of overtime.


Outputs
- Gross Pay: The total earnings before any deductions.
- Pension Deduction: 7% of the gross pay (for pension).
- Tax Deduction: Based on the employee’s income.
- Net Pay: What the employee actually takes home after deductions.


pseudocode 
plaintext
START
    Ask for basic salary, worked hours, bonus rate
    IF worked hours > 40 THEN
        Ask for overtime rate
        Calculate overtime pay
    ELSE
        Overtime pay = 0
    ENDIF

    Calculate:
        Bonus = basic salary * (bonus rate / 100)
        Gross pay = basic salary + bonus + overtime pay
        Pension = 7% of gross pay
        Tax (depends on gross pay):
            - 10% if gross pay <= 10,000
            - 15% if gross pay <= 20,000
            - 20% if gross pay <= 30,000
            - 25% if gross pay > 30,000
        Net pay = gross pay - pension - tax
    Output the net pay
END

Flow chart:
