## Pattern: Hollow Inverted half pyramid

### Input
1. **Row (`r`)**: Integer input representing the number of rows in the triangle.

### Output
1. A hollow inverted half hyramid pattern made of asterisks (`*`), with the number of rows determined by the user.

### Pseudo Code for the Pattern

1. **Start the program.**

2. **Declare Variable**:
   - `r`: Number of rows.

3. **Input**:
   - Prompt the user to enter the number of rows (`r`).

4. **Outer Loop**:
   - Loop variable `i` starts from `r` and iterates down to `1`, representing the current row.

5. **Inner Loop**:
   - Loop variable `j` starts from `i` and iterates down to `1`.
   - **Condition Check**:
     - If `i == 1` (last row), `i == r` (top row), `j == 1` (first column), or `j == i` (last column of the current row), print an asterisk (`*`).
     - Otherwise, print a space (`" "`).

6. **End of Inner Loop**:
   - After printing spaces and asterisks for one row, print a newline character to move to the next row.

7. **Stop the program.**
