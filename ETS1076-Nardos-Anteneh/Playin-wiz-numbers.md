Problem analysis 

Write a program that accepts an integer from the user and perform the following. Once you complete solving all the exercises compile it and prepare a menu.
a) Prints the reverses of the number (e.g. input = 4637215 Output=5217364).
b) Counts the number of digits in a given number (e.g. 23,498 has five digits)
c) Find the product of even digits of the a given number (e.g. input=4,923 prod=8)
d) Prints the first and the last digit of the number and find their sum.
e) Swap the first and the last digit of the number.
g) Check whether a number is palindrome or not.
h) Find the frequency of each digit in a given integer and print in table format.
i) Check if a number is Strong or not.
[Hint]: A Strong number is a number, where the sum of the factorial of the digits is equal to the number itself.
j) Check whether a number is Perfect number or not.
[Hint]: A Perfect Number is an integer where the sum of its divisors minus the number itself equals the number.


Input:
Choice for operation.
An Integer number to be operated on.

Output:
validation statements or results depending on the choice from the 10 options for operation 
Pseudocode 
1. Start

2. Accept
     * Basic salary
     * worked hours
     * bonus rate
3. Check the validity of the inputs(numeric and greaterthan zero)

    3.1. If the input is valid (numeric or greaterthan zero), go to step 4
 
   3.2. If the input is invalid (non- numeric or lessthan zero), Print "Invalid input" and goto step 

4. Check the worked hours if it is greaterthan 40.

   4.1. If worked hours is greaterthan 40 goto step 5.
 
   4.2. If worked hous is lessthan or equal to 40 goto step 7.
   
5. Calculate extra worked hours as the difference between worked hours and 40.

6. Calculate bonus as the product of extra worked hours and bonus rate.

7. Calculate gross salary as the sum of basic salary and bonus.

8. Calcualte pension as the product of pension rate and basic salary.

9. Check the corresponding tax rate if gross salary is lessthan 200.

     9.1. If the gross salary is lessthan 200, the rate is 0%

     9.2. If the gross salary is between 200 and 600, the rate is 10%

     9.3. If the gross salary is between 600 and 1200, the rate is 15%

     9.4. If the gross salary is between 1200 and 2000, the rate is 20%

     9.5. If the gross salary is between 2000 and 3500, the rate is 25%

     9.6. If the gross salary is greater than 3500, the rate is 30%

10. Calculate tax as the product of gross salary and the tax rate.

11. Calcuate net-pay as the difference of gross salary and the sum of pension and tax. 

12. Print the net-pay.

13. Stop
 
