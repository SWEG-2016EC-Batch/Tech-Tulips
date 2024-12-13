# Pseudo Code for Multi-Feature Number Program
## Input
- Choice (choice): Integer, representing the user’s selected operation.
- Number (num): Integer, representing the number the user wants to analyze.
## Output
- Feature-based Results: Based on the chosen feature, output varies:
- Reversed number
- Number of digits
- Product of even digits
- First and last digit
- Swapped first and last digits
- Palindrome check
- Frequency of digits
- Strong number check
- Perfect number check
## Operations
1.Perform calculations based on the user’s selected choice (1 to 9).
2.Allow the program to repeat for new choices or terminate.

## Pseudo Code
1. **Start the program.**

2. **Declare variables:**
   - `choice` (integer): User's choice of operation.
   - `num` (integer): Input number.
   - Helper variables: 
     - `remain`, `rev`, `count`, `product`, `first`, `last`, `freq`, `fact`, `sum` (integer).

3. **Do the following in a loop:**
   - **Prompt** the user to select a choice:
     - `1`: Reverse of the number.
     - `2`: Number of digits.
     - `3`: Product of even digits.
     - `4`: First and last digit.
     - `5`: Swap first and last digit.
     - `6`: Check if the number is a palindrome.
     - `7`: Frequency of each digit.
     - `8`: Check if the number is strong.
     - `9`: Check if the number is perfect.
   - **Input** the value of `choice`.

4. **Input** the number `num`.

5. **Switch** based on the value of `choice`:

   - **Case 1**: Reverse the number.
     - Set `rev` to 0.
     - While `num > 0`:
       - Extract the last digit using `num % 10`.
       - Append the digit to `rev`.
       - Remove the last digit from `num`.
     - **Print** `rev`.

   - **Case 2**: Count the number of digits.
     - Set `count` to 0.
     - While `num > 0`:
       - Increment `count`.
       - Remove the last digit from `num`.
     - **Print** `count`.

   - **Case 3**: Product of even digits.
     - Set `product` to 1.
     - While `num > 0`:
       - Extract the last digit.
       - If the digit is even, multiply it with `product`.
       - Remove the last digit from `num`.
     - **Print** `product`.

   - **Case 4**: First and last digit.
     - Extract digits using a loop.
     - Assign the first digit to `first`.
     - Assign the last digit to `last`.
     - **Print** `first` and `last`.

   - **Case 5**: Swap first and last digit.
     - Extract digits using a loop.
     - Swap `first` and `last` while reconstructing the number.
     - **Print** the new number.

   - **Case 6**: Check if the number is a palindrome.
     - Reverse the number as in Case 1.
     - Compare the reversed number with the original.
     - **Print** whether it is a palindrome.

   - **Case 7**: Frequency of each digit.
     - Count occurrences of digits using a loop.
     - **Print** frequency for each digit.

   - **Case 8**: Check if the number is strong.
     - For each digit, calculate its factorial.
     - Sum the factorials of the digits.
     - Compare the sum to the original number.
     - **Print** whether it is a strong number.

   - **Case 9**: Check if the number is perfect.
     - Find all divisors of the number.
     - Sum the divisors.
     - Compare the sum to the original number.
     - **Print** whether it is a perfect number.

6. **End the program.**
