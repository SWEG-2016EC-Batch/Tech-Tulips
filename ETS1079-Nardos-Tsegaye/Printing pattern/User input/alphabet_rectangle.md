## Pattern: Alphabet Grid

### Input
1. **Row (`r`)**: Integer input representing the number of rows in the pattern.
2. **Column (`c`)**: Integer input representing the number of columns in the pattern.

### Output
1. A grid of alphabet characters (`A`, `B`, `C`, etc.), where each row contains characters printed sequentially from 'A' onward.

### Pseudo Code for the Pattern

1. **Start the program.**

2. **Declare Variables**:
   - `r`: Number of rows.
   - `c`: Number of columns.
   - `alphabet`: Character starting from 'A'.

3. **Input**:
   - Prompt the user for the number of rows (`r`).
   - Prompt the user for the number of columns (`c`).

4. **Outer Loop**:
   - Loop variable `i` starts from `1` and iterates up to `r` (inclusive), representing the number of rows.

5. **Inner Loop**:
   - Loop variable `j` starts from `1` and iterates up to `c` (inclusive), representing the number of columns in each row.
   - Print the current `alphabet` character.
   - Increment `alphabet` to print the next letter.

6. **End of Inner Loop**:
   - After printing characters for one row, print a newline character to move to the next row.

7. **Stop the program.**
