## Pattern: Alphabet right angle triangle

### Input
1. **Row (`r`)**: Integer input representing the number of rows in the pattern.

### Output
1. A pyramid of alphabet characters (`A`, `B`, `C`, etc.), where each row starts from 'A' and continues sequentially up to the corresponding row's character limit.

### Pseudo Code for the Pattern

1. **Start the program.**

2. **Declare Variables**:
   - `r`: Number of rows.
   - `alphabet`: Character starting from 'A'.

3. **Input**:
   - Prompt the user for the number of rows (`r`).

4. **Outer Loop**:
   - Loop variable `i` starts from `0` and iterates up to `r-1` (inclusive), representing the number of rows.

5. **Inner Loop**:
   - Loop variable `alphabet` starts from `'A'` and iterates up to `'A' + i` (inclusive).
   - Print the current `alphabet` character.

6. **End of Inner Loop**:
   - After printing characters for one row, print a newline character to move to the next row.

7. **Stop the program.**
