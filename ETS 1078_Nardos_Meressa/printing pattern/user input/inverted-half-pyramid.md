# **Pattern: Inverted Half Pyramid**

## **Input**
- `r`: Integer input representing the number of rows in the triangle.

## **Output**
- An inverted half pyramid pattern made of asterisks (*) starting with `r` asterisks on the first row and decreasing by one on each subsequent row.

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
     - Each iteration represents the current row in the inverted half pyramid.
5. **Inner Loop**:
   - Initialize `j` to `i`.
   - Loop until `j` is greater than `0`:
     - Print an asterisk (`*`) in each iteration to form the row.

6. **End of Inner Loop**:
   - After printing asterisks for one row, **print a newline** character to move to the next row.

7. **End of Outer Loop**:
   - Repeat steps 4-6 until all rows are printed.

8. **Stop the program.**

---


