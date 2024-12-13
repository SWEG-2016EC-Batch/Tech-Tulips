# **Pattern: Incremental Number Triangle**

## **Input**
- `r`: Integer input representing the number of rows in the triangle.

## **Output**
- A triangle pattern with numbers increasing from `1` to the current row number (`i`) for each row.

---

## **Pseudo Code**

1. **Start the program.**

2. **Declare Variable**:
   - `r`: Number of rows.

3. **Input**:
   - Prompt the user to enter the number of rows (`r`).

4. **Outer Loop**:
   - Initialize `i` to `1`.
   - Loop until `i` is less than or equal to `r`:
     - Each iteration represents the current row in the incremental number triangle.
5. **Inner Loop**:
   - Initialize `j` to `1`.
   - Loop until `j` is less than or equal to `i`:
     - Print the current value of `j`.

6. **End of Inner Loop**:
   - After printing numbers for one row, **print a newline** character to move to the next row.

7. **End of Outer Loop**:
   - Repeat steps 4-6 until all rows are printed.

8. **Stop the program.**

---


