# **Pattern: Inverted Full Pyramid**

## **Input**
- `r`: Integer input representing the number of rows in the triangle.

## **Output**
- An inverted full pyramid pattern made of asterisks (*) with leading spaces to align it to the right.

---

## **Pseudo Code**

1. **Start the program.**

2. **Declare Variable**:
   - `r`: Number of rows.

3. **Input**:
   - Prompt the user to enter the number of rows (`r`).

4. **Outer Loop**:
   - Initialize `i` to `1`.
   - Loop until `i` is greater than `r`:
     - Each iteration represents the current row in the inverted pyramid.

5. **Inner Loops**:
   - **First Inner Loop**:
     - Initialize `j` to `1`.
     - Loop until `j` is greater than `i`:
       - Print a space (" ") in each iteration to create the leading spaces.
   - **Second Inner Loop**:
     - Initialize `j` to `0`.
     - Loop until `j` is less than `r - i`:
       - Print an asterisk (* ) in each iteration to form the triangle.

6. **End of Inner Loops**:
   - After printing spaces and asterisks for one row, **print a newline** character to move to the next row.

7. **End of Outer Loop**:
   - Repeat steps 4-6 until all rows are printed.

8. **Stop the program.**

---



