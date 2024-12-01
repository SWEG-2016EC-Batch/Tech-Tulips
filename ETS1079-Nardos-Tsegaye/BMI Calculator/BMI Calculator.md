#System Design for BMI Calculator

##Input

1. **Weight (w)**: Double data type, representing the user's weight in kilograms.

2. **Height (h)**: Double data type, representing the user's height in meters.

3. **Count (count)**: Integer data type, used to control whether the program continues or stops.

##Output

1. **BMI**: Double data type, representing the calculated Body Mass Index.

2. **Weight Category**: A message indicating the BMI category:

"Underweight" if BMI < 18.5

"Normal weight" if 18.5 ≤ BMI ≤ 24.9

"Overweight" if BMI > 24.9

##Operation

1. **BMI Calculation**: Use the formula BMI = w / (h * h) to calculate the Body Mass Index.

##Pseudo Code

1. **Start the program.**

2. **Declare variables**: w (weight), h (height), BMI (Body Mass Index) as double, and count as int.

3. **Do the following in a loop**:

**Prompt** the user to input their weight.

**Input** the value of w.

**Prompt** the user to input their height.

**Input** the value of h.

Calculate BMI using BMI = w / (h * h).

**Print** the calculated BMI.

Check the BMI category:

If BMI < 18.5, print "Underweight."

Else if 18.5 ≤ BMI ≤ 24.9, print "Normal weight."

Else, print "Overweight."

**Prompt** the user to enter 0 to stop or 1 to continue.

**Input** the value of count.

4. **Stop** the program when count = 0.

