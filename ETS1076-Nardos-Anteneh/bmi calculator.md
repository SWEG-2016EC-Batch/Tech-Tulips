# Body Mass Index (BMI) Calculator Program

## Problem:
The goal is to create a program that calculates the Body Mass Index (BMI) of a person and determines whether the person is in normal weight, underweight, or overweight. The BMI formula is as follows:

\[
\text{BMI} = \frac{\text{weight (kg)}}{\text{height (m)}^2}
\]

### Task:
The program should calculate BMI for multiple people and classify them as:
- Underweight (BMI < 18.5)
- Normal weight (BMI between 18.5 and 24.9)
- Overweight (BMI ≥ 25)

The program should continue running until the user chooses to stop.

## Pseudo-code:
1. Start the program.
2. Repeat for each person:
   1. Prompt the user to input weight (in kg).
   2. Prompt the user to input height (in meters).
   3. Calculate BMI using the formula: BMI = weight / (height * height).
   4. Display the BMI result.
   5. Check the BMI category:
      - If BMI < 18.5 → Underweight
      - If BMI >= 18.5 and BMI < 24.9 → Normal weight
      - If BMI ≥ 25 → Overweight
   6. Ask if the user wants to calculate for another person (y/n).
3. Terminate the program if the user inputs 'n' or 'N'.

## C++ Code Explanation:
1. **Input**:
   - The program prompts the user to enter the weight (in kg) and height (in meters) for each person.
   
2. **BMI Calculation**:
   - The BMI is calculated using the formula: 
   
\[
   \text{BMI} = \frac{\text{weight}}{\text{height}^2}
\]

3. **Output**:
   - The program outputs the BMI value with two decimal precision.
   - Based on the calculated BMI, it outputs the BMI category: underweight, normal weight, or overweight.
   
4. **Loop**:
   - The program continues asking for inputs and calculating BMI for new people until the user decides to stop by entering 'n' or 'N' when prompted.

## flowchart 
![17331692245815543580612498589066](https://github.com/user-attachments/assets/f7709bfe-4874-422d-9cb8-09729b0a8d1e)

