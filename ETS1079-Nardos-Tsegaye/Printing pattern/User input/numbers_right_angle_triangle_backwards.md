## Pattern: Numbers right angle triangle backward

### Input
1. **Row (`r`)**: Integer input representing the number of rows.

### Output
1. A right-aligned pattern where each row displays descending numbers from the row number down to 1.

### Pseudo Code for the Pattern

1. **Start the program.**

2. **Declare Variables**:
   - `r`: Number of rows.

3. **Input**:
   - Prompt the user to enter the number of rows (`r`).

4. **Outer Loop**:
   - Loop variable `i` starts from `1` and iterates up to `r`, representing the current row.

5. **First Inner Loop**:
   - Loop variable `j` starts from `r` and decrements down to `i + 1`.
   - Print a space (`" "`) in each iteration to create the right alignment.

6. **Second Inner Loop**:
   - Loop variable `k` starts from `i` and decrements down to `1`.
   - Print the value of `k` in each iteration, which forms the descending sequence in each row.

7. **End of Inner Loops**:
   - After printing numbers for one row, print a newline character to move to the next row.

8. **Stop the program.**
