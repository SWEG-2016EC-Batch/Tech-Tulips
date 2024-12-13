# **Pseudo Code for Full Pyramid**

## **Input**
No explicit input from the user.

## **Output**
A right-aligned triangle pattern made of asterisks (`*`), with 6 rows:


---

## **Pseudo Code**

1. **Start the program.**

2. **Outer Loop (rows):**
   - Initialize `i` to `1`.
   - Loop until `i <= 6` (inclusive):
     - Each iteration represents one row of the pyramid.

3. **First Inner Loop (spaces):**
   - Initialize `j` to `1`.
   - Loop until `j <= 6 - i`:
     - Print a space (`" "`) in each iteration to create the right alignment.

4. **Second Inner Loop (asterisks):**
   - Initialize `j` to `1`.
   - Loop until `j <= i`:
     - Print an asterisk (`*`) in each iteration.

5. **End of Inner Loops:**
   - After printing spaces and asterisks for one row, **print a newline** character to move to the next row.

6. **End of Outer Loop:**
   - Repeat steps 3-5 until all 6 rows are completed.

7. **Stop the program.**

---





