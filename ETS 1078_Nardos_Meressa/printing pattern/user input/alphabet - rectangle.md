# **Pseudo Code for Alphabet Grid**

## **Input**
- `r`: Integer input representing the number of rows in the pattern.
- `c`: Integer input representing the number of columns in the pattern.

## **Output**
- A grid of alphabet characters (A, B, C, etc.), where each row contains characters printed sequentially from 'A' onward.

---

## **Pseudo Code**

1. **Start the program.**

2. **Declare Variables**:
   - `r`: Number of rows.
   - `c`: Number of columns.
   - `alphabet`: Character starting from 'A'.

3. **Input**:
   - Prompt the user for the number of rows (`r`).
   - Prompt the user for the number of columns (`c`).

4. **Outer Loop (rows)**:
- Initialize `i` to `1`.
   - Loop until `i <= r` (inclusive):
     - Each iteration represents one row.

5. **Inner Loop (columns)**:
   - Initialize `j` to `1`.
   - Loop until `j <= c` (inclusive):
     - Print the current `alphabet` character.
     - Increment `alphabet` to print the next letter.

6. **End of Inner Loop**:
   - After printing characters for one row, **print a newline** character to move to the next row.

7. **End of Outer Loop**:
   - Repeat steps 5-6 until all rows are printed.

8. **Stop the program.**

---

