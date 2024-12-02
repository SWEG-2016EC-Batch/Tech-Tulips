# System design for BMI Calculator

## ** Input **

User's weight
User's height
Continue option (0 to stop, 1 to continue)

## ** Output **

Body Mass Index (BMI)
Weight status based on BMI (Underweight, Normal weight, Overweight)

## Process

Declare variables weight, height, BMI, and cont.
Use a loop to continuously ask the user to input their weight and height.
Calculate the BMI using the formula: BMI = weight / (height * height).

**Print the calculated BMI.**

Determine and print the weight status based on the BMI:
If BMI < 18.5, print "You are Underweight."
If 18.5 <= BMI <= 24.9, print "You are Normal weight."
If BMI > 24.9, print "You are Overweight."
Ask the user if they want to continue or stop. If the user inputs 0, stop the loop.
