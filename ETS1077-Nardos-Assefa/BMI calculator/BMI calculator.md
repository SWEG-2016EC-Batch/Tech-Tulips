

### **Input**
1. Number of people (`people_num`)
2. Weight (in kilograms) for each person
3. Height (in meters) for each person

---

### **Process**
1. Ask the user to enter the number of people (`people_num`).
2. For each person:
   - Input the person's weight and height.
   - Calculate BMI using the formula:  
     \[
     BMI = \frac{\text{Weight}}{\text{Height}^2}
     \]
   - Determine the BMI category:
     - **Underweight** if \( BMI < 18.5 \)
     - **Normal Weight** if \( 18.5 \leq BMI < 24.9 \)
     - **Overweight** if \( BMI \geq 24.9 \)
   - Display the BMI value and the corresponding category.

---

### **Output**
1. For each person:
   - The calculated BMI
   - The BMI category (Underweight, Normal Weight, Overweight)
# Pseudocode

1. **Start**  
2. Declare variables: `Weight`, `Height`, `BMI` as float and `people_num` as integer  
3. Print "Enter the number of people: "  
4. Input `people_num`  
5. Loop through `j` from 1 to `people_num`:
   - Print "Please Enter your Weight in kg: "  
   - Input `Weight`  
   - Print "Please Enter your Height in m: "  
   - Input `Height`  
   - Calculate `BMI` = `Weight / (Height * Height)`  
   - Print "Your BMI is: " and `BMI`  
   - If `BMI < 18.5`:
     - Print "Underweight"  
   - Else If `BMI >= 18.5` AND `BMI < 24.9`:
     - Print "Normal Weight"  
   - Else:
     - Print "Overweight"  
6. **End Loop**  
7. **End**
   ## flowchart
   ![Blank diagram](https://github.com/user-attachments/assets/7f518315-133d-4f5b-8622-f8191f73e29e)

   
