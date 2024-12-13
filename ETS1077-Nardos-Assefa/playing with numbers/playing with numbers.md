
---

# **Pseudo Code for Multi-Feature Number Program**

# **Input:**  
- `choice`: Integer representing the user’s selected operation (1-9).  
- `num`: Integer representing the number to analyze.  

# **Output:**  
- Varies based on the selected feature, including reversed number, digit count, palindrome check, etc.

---

### **Steps**  

1. **Start the program.**  
2. **Declare variables:**  
   - `choice` (integer): User's choice of operation.  
   - `num` (integer): Input number.  
   - Helper variables (as needed): `remain`, `rev`, `count`, `product`, `first`, `last`, `freq[]`, `fact`, `sum`, etc.  

3. **Repeat in a loop:**  
   - Prompt the user to select a choice:  
     1. Reverse the number.  
     2. Count the number of digits.  
     3. Product of even digits.  
     4. First and last digit.  
     5. Swap first and last digits.  
     6. Palindrome check.  
     7. Frequency of digits.  
     8. Strong number check.  
     9. Perfect number check.  
   - Input the value of `choice`.  

4. **Input the number (`num`).**  

5. **Perform operations based on `choice`:**  

   **Case 1:** Reverse the number.  
   - Initialize `rev = 0`.  
   - While `num > 0`:  
     - Extract the last digit (`digit = num % 10`).  
     - Append `digit` to `rev` (`rev = rev * 10 + digit`).  
     - Remove the last digit (`num = num // 10`).  
   - Print `rev`.  

   **Case 2:** Count the number of digits.  
   - Initialize `count = 0`.  
   - While `num > 0`:  
     - Increment `count`.  
     - Remove the last digit (`num = num // 10`).  
   - Print `count`.  

   **Case 3:** Product of even digits.  
   - Initialize `product = 1`.  
   - While `num > 0`:  
     - Extract the last digit (`digit = num % 10`).  
     - If `digit % 2 == 0`: Multiply with `product`.  
     - Remove the last digit (`num = num // 10`).  
   - Print `product`.  

   **Case 4:** First and last digit.  
   - Extract the last digit (`last = num % 10`).  
   - Extract the first digit by dividing `num` repeatedly by 10.  
   - Print `first` and `last`.  

   **Case 5:** Swap first and last digits.  
   - Extract `first` and `last` as in Case 4.  
   - Reconstruct the number with swapped digits.  
   - Print the new number.  

   **Case 6:** Palindrome check.  
   - Reverse the number as in Case 1.  
   - Compare the reversed number with the original.  
   - Print whether it is a palindrome.  

   **Case 7:** Frequency of digits.  
   - Initialize an array `freq[10] = {0}`.  
   - While `num > 0`:  
     - Extract the last digit (`digit = num % 10`).  
     - Increment `freq[digit]`.  
     - Remove the last digit (`num = num // 10`).  
   - Print frequencies of each digit.  

   **Case 8:** Strong number check.  
   - Initialize `sum = 0`.  
   - For each digit in `num`:  
     - Compute its factorial.  
     - Add the factorial to `sum`.  
   - Compare `sum` to the original number.  
   - Print whether it is a strong number.  

   **Case 9:** Perfect number check.  
   - Find all divisors of `num` (excluding itself).  
   - Sum the divisors.  
   - Compare the sum to the original number.  
   - Print whether it is a perfect number.  

6. **Ask the user if they want to continue.**  
7. **End the program if the user chooses to exit.**

---

