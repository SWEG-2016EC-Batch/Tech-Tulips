# **Pseudo Code for Alphabet Right Angle Triangle**

## **Input**
- `r`: Integer input representing the number of rows in the pattern.

## **Output**
- A pyramid of alphabet characters (A, B, C, etc.), where each row starts from 'A' and continues sequentially up to the corresponding row's character limit.

---

## **Pseudo Code**

1. **Start the program.**

2. **Declare Variables**:
   - `r`: Number of rows.
   - `alphabet`: Character starting from 'A'.

3. **Input**:
   - Prompt the user for the number of rows (`r`).

4. **Outer Loop**:
   - Initialize `i` to `0`.
   - Loop until `i < r` (inclusive):
     - Each iteration represents one row.

5. **Inner Loop**:
   - Initialize `alphabet` to 'A'.
   - Loop until `alphabet` is less than or equal to 'A' + `i` (inclusive):
     - Print the current `alphabet` character.

6. **End of Inner Loop**:
   - After printing characters for one row, **print a newline** character to move to the next row.

7. **End of Outer Loop**:
   - Repeat steps 4-6 until all rows are printed.

8. **Stop the program.**

---



