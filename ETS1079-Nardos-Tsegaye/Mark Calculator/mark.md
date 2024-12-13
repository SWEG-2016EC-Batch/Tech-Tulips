# Pseudo Code for Student Grade Calculator
## Input
- Test Mark (test): Float, representing the test score out of 15%.
- Quiz Mark (quiz): Float, representing the quiz score out of 5%.
- Project Mark (project): Float, representing the project score out of 20%.
- Assignment Mark (assignment): Float, representing the assignment score out of 10%.
- Final Exam Mark (final_exam): Float, representing the final exam score out of 50%.
## Output
- Total Mark (total): Float, the sum of all marks.
- Grade: Character grade based on the total mark:
  A+ if total ≥ 90
  A if 80 ≤ total < 90
  B+ if 75 ≤ total < 80
  B if 60 ≤ total < 75
  C+ if 55 ≤ total < 60
  C if 45 ≤ total < 55
  D if 30 ≤ total < 45
  F if total < 30
## Operations
Calculate the total mark as the sum of the individual components.
Determine the grade based on the total mark using conditional statement.

## Pseudo Code
1. **Start the program.**

2. **Declare variables:**
   - `test`, `quiz`, `project`, `assignment`, `final_exam` (float): Individual component scores.
   - `total` (float): The sum of all component scores.

3. **Input the marks for each component:**
   - **Prompt**: "Enter your test mark out of 15%:"
   - **Input**: `test`
   - **Prompt**: "Enter your quiz mark out of 5%:"
   - **Input**: `quiz`
   - **Prompt**: "Enter your project mark out of 20%:"
   - **Input**: `project`
   - **Prompt**: "Enter your assignment mark out of 10%:"
   - **Input**: `assignment`
   - **Prompt**: "Enter your final exam mark out of 50%:"
   - **Input**: `final_exam`

4. **Calculate the total mark:**
   - `total = test + quiz + project + assignment + final_exam`

5. **Print** the total mark:
   - **Output**: "Your total mark is: [total]"

6. **Determine the grade using conditional statements:**
   - If `total >= 90`:
     - **Print**: "Your grade is: A+"
   - Else if `80 ≤ total < 90`:
     - **Print**: "Your grade is: A"
   - Else if `75 ≤ total < 80`:
     - **Print**: "Your grade is: B+"
   - Else if `60 ≤ total < 75`:
     - **Print**: "Your grade is: B"
   - Else if `55 ≤ total < 60`:
     - **Print**: "Your grade is: C+"
   - Else if `45 ≤ total < 55`:
     - **Print**: "Your grade is: C"
   - Else if `30 ≤ total < 45`:
     - **Print**: "Your grade is: D"
   - Else:
     - **Print**: "Your grade is: F"

7. **End the program.**
