## Pattern: Inverted half pyramid

### Input
1. **Row (`r`)**: Integer input representing the number of rows in the triangle.

### Output
1. An inverted half pyramid pattern made of asterisks (`*`), starting with `r` asterisks on the first row and decreasing by one on each subsequent row.

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
   - Print an asterisk (`*`) in each iteration to form the row.

6. **End of Inner Loop**:
   - After printing asterisks for one row, print a newline character to move to the next row.

7. **Stop the program.**
