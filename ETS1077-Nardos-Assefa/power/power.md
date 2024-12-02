

## **Input**
1. `X`: The base number (integer).
2. `Y`: The power/exponent (integer).

---

## **Process**
1. Prompt the user to enter the base (`X`).
2. Prompt the user to enter the power (`Y`).
3. Initialize the variable `p` to 1 to store the result.
4. Use a loop that runs from 1 to `Y`:
   - Multiply `p` by `X` in each iteration.
5. After the loop ends, the value of `p` will be the result of \( X^Y \).
6. Display the result.

---

## **Output**
- The result of \( X^Y \) (base raised to the power).



## **Pseudocode**

1. **Start**
2. Declare variables:
   - `X` as integer (base)
   - `Y` as integer (power)
   - `i` as integer (loop counter)
   - `p` as integer, initialized to 1 (to store the result)
3. Print "Enter the base:"
4. Input `X`
5. Print "Enter the power:"
6. Input `Y`
7. For `i = 1` to `Y`:
   - Set `p = p * X`
8. Print "Result: ", `p`
9. **End**




