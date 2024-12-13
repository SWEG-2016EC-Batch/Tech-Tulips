## Pattern: Inverted full pyramid

### Input
1. **Row (`r`)**: Integer input representing the number of rows in the triangle.

### Output
1. An inverted full pyramid pattern made of asterisks (`*`), with leading spaces to align it to the right.

### Pseudo Code for the Pattern

1. **Start the program.**

2. **Declare Variable**:
   - `r`: Number of rows.

3. **Input**:
   - Prompt the user to enter the number of rows (`r`).

4. **Outer Loop**:
   - Loop variable `i` starts from `1` and iterates up to `r`, representing the current row.

5. **Inner Loops**:
   - **First Inner Loop**:
     - Loop variable `j` starts from `1` and iterates up to `i`.
     - Print a space (`" "`) in each iteration to create the leading spaces.
   - **Second Inner Loop**:
     - Loop variable `j` starts from `0` and iterates up to `r - i`.
     - Print an asterisk (`* `) in each iteration to form the triangle.

6. **End of Inner Loops**:
   - After printing spaces and asterisks for one row, print a newline character to move to the next row.

7. **Stop the program.**
