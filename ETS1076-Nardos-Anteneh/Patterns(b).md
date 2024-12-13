

Pattern Generator Program

This program generates various patterns based on the user's choice. The user is prompted to input the number of rows and columns, followed by their pattern selection. Patterns range from pyramids and rectangles to hollow shapes.



Input

1. Number of rows.


2. Number of columns.


3. Pattern choice (1-11).



Output

The program displays the selected pattern based on the user's input.


Process

1. Prompt the user for the number of rows, columns, and their pattern choice.


2. Use a switch statement to generate the corresponding pattern based on the choice.


3. Utilize nested loops for pattern creation:

Outer loop for rows.

Inner loop for columns or logic.



4. Display the pattern on the console.






Pseudo Code

Start
Prompt user for number of rows
Input rows
Prompt user for number of columns
Input columns
Prompt user for pattern choice
Input choice

Switch(choice):
    Case 1:
        Generate rectangle of stars
    Case 2:
        Generate square of stars
    Case 3:
        Generate half pyramid of stars
    Case 4:
        Generate half pyramid of numbers
    Case 5:
        Generate inverted half pyramid of stars
    Case 6:
        Generate half pyramid of alphabets
    Case 7:
        Generate inverted half pyramid of alphabets
    Case 8:
        Generate full pyramid of stars
    Case 9:
        Generate inverted full pyramid of stars
    Case 10:
        Generate hollow full pyramid of stars
    Case 11:
        Generate inverted hollow full pyramid of stars
    Default:
        Display invalid choice
End


