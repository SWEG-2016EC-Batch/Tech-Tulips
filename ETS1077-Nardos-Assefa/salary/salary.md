

## **Input**
1. `name`: The name of the employee (string).
2. `work_hrs`: The number of hours worked per week (float).
3. `bonus_rate`: The bonus rate per hour (float).
4. `base_salary`: The base salary of the employee (float).

---

## **Process**
1. Prompt the user to enter the employee's name (`name`).
2. Prompt the user to enter the weekly working hours (`work_hrs`).
3. Prompt the user to enter the bonus rate per hour (`bonus_rate`).
4. Prompt the user to enter the base salary (`base_salary`).
5. Calculate the bonus:
   \[
   \text{bonus} = \text{work\_hrs} \times \text{bonus\_rate}
   \]
6. Calculate the gross salary:
   \[
   \text{gross\_salary} = \text{base\_salary} + \text{bonus}
   \]
7. Calculate the tax amount:
   \[
   \text{tax} = \text{gross\_salary} \times 0.15
   \]
8. Calculate the pension contribution:
   \[
   \text{pension} = \text{gross\_salary} \times 0.05
   \]
9. Calculate the net salary:
   \[
   \text{net\_salary} = \text{gross\_salary} - (\text{tax} + \text{pension})
   \]
10. Display the employee's name, gross salary, net salary, and bonus.

---

## **Output**
- The employee's name.
- The gross salary.
- The net salary after tax and pension deductions.
- The bonus payment.



## **Pseudocode**

1. **Start**
2. Declare variables:
   - `name` as string (to store employee name)
   - `work_hrs` as float (for weekly working hours)
   - `bonus_rate` as float (for bonus per hour)
   - `base_salary` as float (for base salary)
   - `gross_salary` as float (calculated gross salary)
   - `tax` as float (calculated tax amount)
   - `pension` as float (calculated pension contribution)
   - `net_salary` as float (calculated net salary after deductions)
   - `bonus` as float (calculated bonus payment)
3. Print "Enter Employee name:"
4. Input `name`
5. Print "Enter Weekly working hours:"
6. Input `work_hrs`
7. Print "Enter bonus rate per hour:"
8. Input `bonus_rate`
9. Print "Enter base salary:"
10. Input `base_salary`
11. Calculate `bonus` = `work_hrs` * `bonus_rate`
12. Calculate `gross_salary` = `base_salary` + `bonus`
13. Calculate `tax` = `gross_salary` * 0.15
14. Calculate `pension` = `gross_salary` * 0.05
15. Calculate `net_salary` = `gross_salary` - (`tax` + `pension`)
16. Print `name`
17. Print "Gross salary is:", `gross_salary`
18. Print "Net salary is:", `net_salary`
19. Print "Bonus payment is:", `bonus`
20. **End**
    ## flowchart
    ![Blank diagram(3)](https://github.com/user-attachments/assets/d51b58ab-af4b-42f5-b212-7a8b7bb4cafb)


