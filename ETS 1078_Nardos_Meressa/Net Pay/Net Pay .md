## Pattern: Salary Calculation with Overtime and Tax

### Input
1. **Basic Salary**: The employee's basic salary.
2. **Working Hours**: Total number of hours worked by the employee in a week.
3. **Bonus Rate**: The bonus rate per hour worked.
4. **Overtime Bonus Rate** (Optional): The rate for overtime worked (if applicable).

### Output
1. **Gross Salary**: The total salary before deductions (basic salary + bonus + overtime pay).
2. **Tax**: The amount of tax based on the gross salary.
3. **Pension**: The amount deducted for pension (70% of gross salary).
4. **Bonus**: The bonus payment (including overtime if applicable).
5. **Net Salary**: The salary after pension and tax deductions.

### Pseudo Code for the Pattern

1. **Start the program.**

2. **Input**:
   - Prompt for the basic salary, working hours, and bonus rate.

3. **Overtime Calculation** (if applicable):
   - If working hours are greater than 40, calculate the extra working hours (`extra_wrk_hrs`), and compute overtime pay (`over_time_pay`).

4. **Gross Salary Calculation**:
   - Calculate the bonus based on working hours and bonus rate, add overtime pay (if applicable).
   - Add the bonus to the basic salary to calculate the gross salary (`gross_slry`).

5. **Tax Rate Determination**:
   - Based on the gross salary, determine the tax rate:
     - If gross salary is less than 200, tax rate is 0%.
     - If gross salary is between 200 and 600, tax rate is 10%.
     - If gross salary is between 600 and 1200, tax rate is 15%.
     - If gross salary is between 1200 and 2000, tax rate is 20%.
     - If gross salary is between 2000 and 3500, tax rate is 25%.
     - If gross salary is more than 3500, tax rate is 30%.

6. **Deductions**:
   - Calculate the tax based on the gross salary and tax rate.
   - Calculate pension (70% of gross salary).
   - Compute the net salary by subtracting both pension and tax from the gross salary.

7. **Output**:
   - Print the gross salary, tax, pension, bonus, and net salary.

8. **Stop the program.**


