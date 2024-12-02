# **BMI Calculator Program**

This program calculates the **Body Mass Index (BMI)** of a person and tells you whether they’re underweight, normal weight, or overweight. It also allows for multiple calculations for different people.

### **Steps:**

1. **Input weight and height**: The program asks you to input your weight (in kilograms) and height (in meters).
2. **Calculate BMI**: The BMI is calculated using the formula: `BMI = weight / (height * height)`.
3. **Categorize BMI**:
   - **Underweight**: BMI < 18.5
   - **Normal weight**: 18.5 ≤ BMI < 24.9
   - **Overweight**: BMI ≥ 25
4. **Repeat the process**: You can calculate the BMI for more people by entering 'y' when prompted.

### **Code Explanation**:

- The program takes **weight** and **height** as input.
- It checks that the inputs are **positive numbers**.
- After calculating the BMI, it outputs the **BMI** value and its **category**.
- The user is given the option to **calculate again**.

### **Flowchart**:

![Flowchart for BMI Calculator](bmi_calculator_flowchart.png)

### **Flowchart Description**:
- **Start**: The program starts.
- **Input weight and height**: User is asked for weight and height.
- **BMI Calculation**: BMI is calculated.
- **Check input validity**: The program checks if the input values are valid (positive numbers).
- **BMI Category**: The program checks which BMI category the person falls into (Underweight, Normal, Overweight).
- **Repeat**: The user is asked if they want to calculate another BMI.

---

### **Notes**:

- This code works well for a **single calculation** or **multiple people**.
- You’ll get to see the BMI and category instantly.
