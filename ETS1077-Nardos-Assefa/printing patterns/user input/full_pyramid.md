# **Pattern: Full Pyramid**

## **Input**
- `r`: Integer input representing the number of rows in the pyramid.

## **Output**
- A right-aligned pyramid pattern made of asterisks (*), with the number of rows determined by the user.

---

## **Pseudo Code**

1. **Start the program.**

2. **Declare Variable**:
   - `r`: Number of rows.

3. **Input**:
   - Prompt the user to enter the number of rows (`r`).

4. **Outer Loop**:
   - Initialize `i` to `1`.
   - Loop until `i` is less than or equal to `r` (inclusive):
     - Each iteration represents a row in the pyramid.

5. **First Inner Loop**:
   - Initialize `j` to `1`.
   - Loop until `j` is less than or equal to `r - i`:
     - Print a space (" ") to create the right alignment of the pyramid.

6. **Second Inner Loop**:
   - Initialize `j` to `1`.
   - Loop until `j` is less than or equal to `i`:
     - Print an asterisk followed by a space ("* ") to form the pyramid.

7. **End of Inner Loops**:
   - After printing spaces and asterisks for one row, **print a newline** character to move to the next row.

8. **End of Outer Loop**:
   - Repeat steps 4-7 until all rows are printed.

9. **Stop the program.**

---

