# **Pattern: Salary Calculation with Overtime and Tax**

## **Input**
- `Basic Salary`: The employee's basic salary.
- `Working Hours`: Total number of hours worked by the employee in a week.
- `Bonus Rate`: The bonus rate per hour worked.
- `Overtime Bonus Rate` (Optional): The rate for overtime worked.

## **Output**
- `Gross Salary`: The total salary before deductions (basic salary + bonus + overtime pay).
- `Tax`: The amount of tax based on the gross salary.
- `Pension`: The amount deducted for pension (70% of gross salary).
- `Bonus`: The bonus payment (including overtime if applicable).
- `Net Salary`: The salary after pension and tax deductions.

---

## **Pseudo Code**

1. **Start the program.**

2. **Input**:
   - Prompt for the `basic salary`, `working hours`, and `bonus rate`.

3. **Overtime Calculation (if applicable)**:
   - If `working hours` are greater than `40`, calculate the extra working hours (`extra_wrk_hrs`):
     - `extra_wrk_hrs` = `working hours` - `40`
   - Calculate overtime pay (`over_time_pay`):
     - `over_time_pay` = `extra_wrk_hrs` * `overtime_bonus_rate`

4. **Gross Salary Calculation**:
   - Calculate the bonus based on `working hours` and `bonus rate`:
     - `bonus` = `working hours` * `bonus rate`
   - Add `over_time_pay` (if applicable) to `bonus`.
   - Calculate the gross salary (`gross_slry`):
     - `gross_slry` = `basic salary` + `bonus` + `over_time_pay`

5. **Tax Rate Determination**:
   - Determine the tax rate based on `gross_slry`:
     - If `gross_slry` < 200: Tax rate = 0%
     - If `gross_slry` between 200 and 600: Tax rate = 10%
     - If `gross_slry` between 600 and 1200: Tax rate = 15%
     - If `gross_slry` between 1200 and 2000: Tax rate = 20%
     - If `gross_slry` between 2000 and 3500: Tax rate = 25%
     - If `gross_slry` > 3500: Tax rate = 30%

6. **Deductions**:
   - Calculate the tax:
     - `tax` = `gross_slry` * (tax rate / 100)
   - Calculate pension (70% of `gross_slry`):
     - `pension` = `gross_slry` * 0.7
   - Compute the net salary:
     - `net_slry` = `gross_slry` - `tax` - `pension`

7. **Output**:
   - Print the `gross salary`, `tax`, `pension`, `bonus`, and `net salary`.

8. **Stop the program.**

---

## **Example Calculation**:
- **Input**:
  - Basic Salary: $2500
  - Working Hours: 50
  - Bonus Rate: $5
  - Overtime Bonus Rate: $10

- **Output**:
  - Gross Salary: $2750
  - Tax: $412.5 (15%)
  - Pension: $1925
  - Bonus: $250 (including overtime pay)
  - Net Salary: $1127.5

---


