## Pattern: Incremental Number Triangle

### Input
1. **Row (`r`)**: Integer input representing the number of rows in the triangle.

### Output
1. A triangle pattern with numbers increasing from `1` to the current row number (`i`) for each row.

### Pseudo Code for the Pattern

1. **Start the program.**

2. **Declare Variable**:
   - `r`: Number of rows.

3. **Input**:
   - Prompt the user to enter the number of rows (`r`).

4. **Outer Loop**:
   - Loop variable `i` starts from `1` and iterates up to `r`, representing the current row.

5. **Inner Loop**:
   - Loop variable `j` starts from `1` and iterates up to `i`.
   - Print the value of `j` in each iteration to form the current row.

6. **End of Inner Loop**:
   - After printing numbers for one row, print a newline character to move to the next row.

7. **Stop the program.**
