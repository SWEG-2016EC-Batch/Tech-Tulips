# **Pattern: Hollow Inverted Half Pyramid**

## **Input**
- `r`: Integer input representing the number of rows in the triangle.

## **Output**
- A hollow inverted right-angled triangle pattern made of asterisks (*), with the number of rows determined by the user.

---

## **Pseudo Code**

1. **Start the program.**

2. **Declare Variable**:
   - `r`: Number of rows.

3. **Input**:
   - Prompt the user to enter the number of rows (`r`).

4. **Outer Loop**:
   - Initialize `i` to `r`.
   - Loop until `i` is greater than `0`:
     - Each iteration represents a row in the inverted pyramid.

5. **Inner Loop**:
   - Initialize `j` to `i`.
   - Loop until `j` is greater than `0`:
     - Condition Check:
       - If `i == 1` (last row), `i == r` (top row), `j == 1` (first column), or `j == i` (last column of the current row), print an asterisk followed by a space ("* ").
       - Otherwise, print a space (" ") to create the hollow effect.

6. **End of Inner Loop**:
   - After printing spaces and asterisks for one row, **print a newline** character to move to the next row.

7. **End of Outer Loop**:
   - Repeat steps 4-6 until all rows are printed.

8. **Stop the program.**

---



