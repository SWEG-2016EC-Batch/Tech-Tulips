# **Pattern: Numbers Right Angle Triangle Backward**

## **Input**
- `r`: Integer input representing the number of rows.

## **Output**
- A right-aligned pattern where each row displays descending numbers from the row number down to `1`.

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
     - Each iteration represents the current row in the pattern.

5. **First Inner Loop**:
   - Initialize `j` to `r`.
   - Loop until `j` is greater than `i`:
     - Print a space (" ") in each iteration to create the right alignment.

6. **Second Inner Loop**:
   - Initialize `k` to `i`.
   - Loop until `k` is greater than `0`:
     - Print the value of `k`.

7. **End of Inner Loops**:
   - After printing numbers for one row, **print a newline** character to move to the next row.

8. **End of Outer Loop**:
   - Repeat steps 4-7 until all rows are printed.

9. **Stop the program.**

---

