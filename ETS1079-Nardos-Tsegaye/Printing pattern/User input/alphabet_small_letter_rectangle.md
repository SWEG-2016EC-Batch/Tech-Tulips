## Pattern:Alphabet small letter

### Input
1. **Row (`r`)**: Integer input representing the number of rows in the pattern.

### Output
1. A grid pattern where each row contains the lowercase English alphabets from 'a' to 'e'.

### Pseudo Code for the Pattern

1. **Start the program.**

2. **Declare Variables**:
   - `r`: Number of rows.
   - `c`: Number of columns (default is 5 since it prints 'a' to 'e').

3. **Input**:
   - Prompt the user for the number of rows (`r`).

4. **Outer Loop**:
   - Loop variable `i` starts from `1` and iterates up to `r` (inclusive), representing the number of rows.

5. **Inner Loop**:
   - Loop variable `alphabet` starts from `'a'` and iterates up to `'e'` (inclusive).
   - Print the current `alphabet` character.

6. **End of Inner Loop**:
   - After printing characters for one row, print a newline character to move to the next row.

7. **Stop the program.**
