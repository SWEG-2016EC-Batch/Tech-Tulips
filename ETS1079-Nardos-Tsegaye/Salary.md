# System Design for Salary Calculator

## Input
1. **Employee Name**: String data type
2. **Weekly Working Hours**: Double data type
3. **Bonus Rate per Hour**: Double data type
4. **Base Salary**: Double data type

## Output
1. **Gross Salary**: Double data type
2. **Net Salary**: Double data type
3. **Bonus Payment**: Double data type

## Operation
1. **Multiplication**: Calculate the bonus using the formula `bonus = wrk_hrs * bns_rate`.
2. **Addition**: Calculate the gross salary using the formula `gross_slry = base_slry + bonus`.
3. **Multiplication**: Calculate tax as `tax = gross_slry * 0.15`.
4. **Multiplication**: Calculate pension as `pension = gross_slry * 0.5`.
5. **Subtraction**: Calculate net salary as `net_slry = gross_slry - pension - tax`.

## Pseudo Code

1. **Start** the program.
2. **Declare** `name` using `string` data type.
3. **Declare** `wrk_hrs`, `bns_rate`, `base_slry`, `bonus`, `gross_slry`, `tax`, `pension`, `net_slry` using `double` data type.
4. **Prompt** the user to enter the employee's name.
5. **Take** the name input and store it in the `name` variable.
6. **Prompt** the user to enter the weekly working hours.
7. **Take** the weekly working hours input and store it in the `wrk_hrs` variable.
8. **Prompt** the user to enter the bonus rate per hour.
9. **Take** the bonus rate input and store it in the `bns_rate` variable.
10. **Prompt** the user to enter the base salary.
11. **Take** the base salary input and store it in the `base_slry` variable.
12. **Calculate** the bonus as `bonus = wrk_hrs * bns_rate`.
13. **Calculate** the gross salary as `gross_slry = base_slry + bonus`.
14. **Calculate** the tax as `tax = gross_slry * 0.15`.
15. **Calculate** the pension as `pension = gross_slry * 0.5`.
16. **Calculate** the net salary as `net_slry = gross_slry - pension - tax`.
17. **Print** the employee name.
18. **Print** the gross salary as `Gross salary is: ` + `gross_slry`.
19. **Print** the net salary as `Net salary is: ` + `net_slry`.
20. **Print** the bonus payment as `Bonus payment is: ` + `bonus`.
21. **Stop** the program.

## Flowchart
![Flowchart](insert-flowchart-)
