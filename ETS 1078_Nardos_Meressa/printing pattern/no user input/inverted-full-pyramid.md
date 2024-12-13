# **Pseudo Code for Inverted Full Pyramid**

## **Input**
No explicit input from the user.

## **Output**
An inverted right-aligned triangle pattern made of asterisks (`*`), with 6 rows:


---

## **Pseudo Code**

1. **Start the program.**

2. **Outer Loop (rows):**
   - Initialize `i` to `1`.
   - Loop until `i <= 6` (inclusive):
     - Each iteration represents one row of the pattern.

3. **First Inner Loop (spaces):**
   - Initialize `j` to `1`.
   - Loop until `j <= i` (inclusive):
     - Print a space (`" "`) in each iteration to create indentation for the right-aligned pattern.
4. **Second Inner Loop (asterisks):**
   - Initialize `j` to `0`.
   - Loop until `j < 6 - i` (inclusive):
     - Print an asterisk (`*`) in each iteration to form the triangle pattern.

5. **End of Inner Loops:**
   - After printing spaces and asterisks for one row, **print a newline** character to move to the next row.

6. **End of Outer Loop:**
   - Repeat steps 3-5 until all 6 rows are printed.

7. **Stop the program.**

---



