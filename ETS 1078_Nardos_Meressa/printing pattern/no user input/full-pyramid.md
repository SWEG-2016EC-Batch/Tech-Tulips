# **Pseudo Code for Hollow Pyramid**

## **Input**
No explicit input from the user.

## **Output**
A hollow right-angled triangle pattern made of asterisks (`*`), with 6 rows:


---

## **Pseudo Code**

1. **Start the program.**

2. **Outer Loop (rows):**
   - Initialize `i` to `0`.
   - Loop until `i <= 5` (inclusive):
     - Each iteration represents one row of the pyramid.

3. **First Inner Loop (spaces):**
   - Initialize `j` to `0`.
   - Loop until `j < 5 - i`:
     - Print a space (`" "`) in each iteration to create the right alignment.
4. **Second Inner Loop (asterisks and hollow spaces):**
   - Initialize `j` to `0`.
   - Loop until `j <= 2 * i`:
     - **Condition Check:**
       - If `j == 0` (first column), `j == 2 * i` (last column of the row), or `i == 5` (bottom row), print an asterisk (`*`).
       - Otherwise, print spaces (`" "`).

5. **End of Inner Loops:**
   - After printing spaces and asterisks for one row, **print a newline** character to move to the next row.

6. **End of Outer Loop:**
   - Repeat steps 3-5 until all 6 rows are completed.

7. **Stop the program.**

---



