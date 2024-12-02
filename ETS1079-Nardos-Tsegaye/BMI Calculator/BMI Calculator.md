# System Design for BMI Calculator

## Input

1. **Weight (w)**: Double data type, representing the user's weight in kilograms.

2. **Height (h)**: Double data type, representing the user's height in meters.

3. **Count (count)**: Integer data type, used to control whether the program continues or stops.

## Output

1. **BMI**: Double data type, representing the calculated Body Mass Index.

2. **Weight Category**: A message indicating the BMI category:

"Underweight" if BMI < 18.5

"Normal weight" if 18.5 ≤ BMI ≤ 24.9

"Overweight" if BMI > 24.9

## Operation

1. **BMI Calculation**: Use the formula BMI = w / (h * h) to calculate the Body Mass Index.

## Pseudo Code

1. **Start the program.**

2. **Declare variables**: w (weight), h (height), BMI (Body Mass Index) as double, and count as int.

3. **Do the following in the loop**

  3.1**Prompt** the user to input their weight.

  3.2**Input** the value of w.

  3.3**Prompt** the user to input their height.

  3.4**Input** the value of h.

4. Calculate BMI using BMI = w / (h * h).

5. **Print** the calculated BMI.

6. Check the BMI category:

6.1 If BMI < 18.5, print "Underweight."

Else if 18.5 ≤ BMI ≤ 24.9, print "Normal weight."

Else, print "Overweight."

7. **Prompt** the user to enter 0 to stop or 1 to continue.

7.1 **Input** the value of count.
7.1 **If the value of cout is 1 go to step 3.

8. **Stop** the program when count = 0.


## Flow chart

![Blank diagram (10)](https://github.com/user-attachments/assets/ee4d32e6-d40a-49e0-94b4-a98c4e887131)





