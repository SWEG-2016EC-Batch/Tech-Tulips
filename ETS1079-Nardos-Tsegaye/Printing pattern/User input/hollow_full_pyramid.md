## Pattern: Hollow full Pyramid

### Input
1. **Row (`r`)**: Integer input representing the number of rows in the pyramid.

### Output
1. A hollow right-aligned pyramid pattern made of asterisks (`*`), with the number of rows determined by the user.

### Pseudo Code for the Pattern

1. **Start the program.**

2. **Declare Variable**:
   - `r`: Number of rows.

3. **Input**:
   - Prompt the user to enter the number of rows (`r`).

4. **Outer Loop**:
   - Loop variable `i` starts from `0` and iterates up to `r - 1` (inclusive), representing the current row.

5. **First Inner Loop**:
   - Loop variable `j` starts from `0` and iterates up to `r - i - 1`.
   - Print a space (`" "`) to create the right alignment of the pyramid.

6. **Second Inner Loop**:
   - Loop variable `j` starts from `0` and iterates up to `i` (inclusive).
   - **Condition Check**:
     - If `i == 0` (top row), `i == r - 1` (bottom row), `j == 0` (first column), or `j == i` (last column), print an asterisk followed by a space (`"* "`).
     - Otherwise, print spaces (`"  "`) to create the hollow effect.

7. **End of Inner Loops**:
   - After printing spaces and asterisks for one row, print a newline character to move to the next row.

8. **Stop the program.**
