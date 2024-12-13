# **Pattern: Hollow Rectangle of Asterisks**

## **Input**
- `r`: Integer input representing the number of rows in the rectangle.
- `c`: Integer input representing the number of columns in the rectangle.

## **Output**
- A hollow rectangle pattern made of asterisks (*) with dimensions `r x c`.

---

## **Pseudo Code**

1. **Start the program.**

2. **Declare Variables**:
   - `r`: Number of rows.
   - `c`: Number of columns.

3. **Input**:
   - Prompt the user to enter the number of rows (`r`).
   - Prompt the user to enter the number of columns (`c`).

4. **Outer Loop**:
   - Initialize `i` to `1`.
   - Loop until `i` is greater than `r`:
     - Each iteration represents a row in the rectangle.

5. **Inner Loop**:
   - Initialize `j` to `1`.
   - Loop until `j` is greater than `c`:
     - Condition Check:
       - If `i == 1` (top row), `i == r` (bottom row), `j == 1` (first column), or `j == c` (last column), print an asterisk followed by a space ("* ").
       - Otherwise, print a space (" ") to create the hollow effect.

6. **End of Inner Loop**:
   - After printing spaces and asterisks for one row, **print a newline** character to move to the next row.

7. **End of Outer Loop**:
   - Repeat steps 4-6 until all rows are printed.

8. **Stop the program.**

---



