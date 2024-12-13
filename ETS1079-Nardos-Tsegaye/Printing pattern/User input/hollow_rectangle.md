## Pattern: Hollow Rectangle of Asterisks

### Input
1. **Row (`r`)**: Integer input representing the number of rows in the rectangle.
2. **Column (`c`)**: Integer input representing the number of columns in the rectangle.

### Output
1. A hollow rectangle pattern made of asterisks (`*`) with dimensions `r` x `c`.

### Pseudo Code for the Pattern

1. **Start the program.**

2. **Declare Variables**:
   - `r`: Number of rows.
   - `c`: Number of columns.

3. **Input**:
   - Prompt the user to enter the number of rows (`r`).
   - Prompt the user to enter the number of columns (`c`).

4. **Outer Loop**:
   - Loop variable `i` starts from `1` and iterates up to `r`, representing the current row.

5. **Inner Loop**:
   - Loop variable `j` starts from `1` and iterates up to `c`, representing the current column.
   - **Condition Check**:
     - If `i == 1` (top row), `i == r` (bottom row), `j == 1` (first column), or `j == c` (last column), print an asterisk (`*`).
     - Otherwise, print a space (`" "`).

6. **End of Inner Loop**:
   - After printing spaces and asterisks for one row, print a newline character to move to the next row.

7. **Stop the program.**
