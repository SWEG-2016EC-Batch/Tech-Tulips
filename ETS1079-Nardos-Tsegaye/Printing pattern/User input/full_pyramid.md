## Pattern:Full Pyramid

### Input
1. **Row (`r`)**: Integer input representing the number of rows in the pyramid.

### Output
1. A right-aligned pyramid pattern made of asterisks (`*`), with the number of rows determined by the user.

### Pseudo Code for the Pattern

1. **Start the program.**

2. **Declare Variable**:
   - `r`: Number of rows.

3. **Input**:
   - Prompt the user to enter the number of rows (`r`).

4. **Outer Loop**:
   - Loop variable `i` starts from `1` and iterates up to `r` (inclusive), representing the current row.

5. **First Inner Loop**:
   - Loop variable `j` starts from `1` and iterates up to `r - i`.
   - Print a space (`" "`) to create the right alignment of the pyramid.

6. **Second Inner Loop**:
   - Loop variable `j` starts from `1` and iterates up to `i`.
   - Print an asterisk followed by a space (`"* "`) to form the pyramid.

7. **End of Inner Loops**:
   - After printing spaces and asterisks for one row, print a newline character to move to the next row.

8. **Stop the program.**
