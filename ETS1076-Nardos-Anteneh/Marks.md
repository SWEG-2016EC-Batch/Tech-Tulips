Grade Calculation Program

 Input:
- Test score (out of 15%)
- Quiz score (out of 5%)
- Project score (out of 20%)
- Assignment score (out of 10%)
- Final exam score (out of 50%)

Output:
- The program will calculate the total score by adding up all the individual scores.
- It will then assign a grade based on the total score:
  - 90 and above = A+
  - 80 - 89 = A
  - 75 - 79 = B+
  - 60 - 74 = B
  - 55 - 59 = C+
  - 45 - 54 = C
  - 30 - 44 = D
  - Below 30 = F

 Process:
1. ask the user to enter the score for each assessment (test, quiz, project, assignment, and final exam).
2. Validate that the entered scores do not exceed their respective maximum values (Test: 15, Quiz: 5, Project: 20, Assignment: 10, Final Exam: 50).
3. Calculate the total score by summing up all the individual scores.
4. Based on the total score, assign a grade from the grading scale:
   - If total score is greater than or equal to 90, assign grade "A+".
   - If total score is between 80 and 89, assign grade "A".
   - Continue with the other grade assignments (B+, B, C+, C, D, F) according to the ranges defined above.

Pseudocode:

START Ask user to input test score (out of 15%) IF test score is invalid, show error and STOP

 Ask user to input quiz score (out of 5%)
IF quiz score is invalid, show error and STOP

Askuser to input project score (out of 20%)
IF project score is invalid, show error and STOP

Ask user to input assignment score (out of 10%)
IF assignment score is invalid, show error and STOP

Ask user to input final exam score (out of 50%)
IF final exam score is invalid, show error and STOP

CALCULATE total score = test score + quiz score + project score + assignment score + final exam score

IF total score >= 90 THEN print "A+"
ELSE IF total score >= 80 THEN print "A"
ELSE IF total score >= 75 THEN print "B+"
ELSE IF total score >= 60 THEN print "B"
ELSE IF total score >= 55 THEN print "C+"
ELSE IF total score >= 45 THEN print "C"
ELSE IF total score >= 30 THEN print "D"
ELSE print "F"

END

