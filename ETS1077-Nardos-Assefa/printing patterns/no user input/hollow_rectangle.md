# **Pseudo Code for Hollow Rectangle**

## **Input**
No explicit input from the user.

## **Output**
A hollow rectangle pattern made of asterisks (`*`), with 7 rows and 8 columns:


---

## **Pseudo Code**

1. **Start the program.**

2. **Outer Loop (rows):**
   - Initialize `i` to `1`.
   - Loop until `i <= 7` (inclusive):
     - Each iteration represents one row of the rectangle.

3. **Inner Loop (columns):**
   - Initialize `j` to `1`.
   - Loop until `j <= 8` (inclusive):
     - **Condition Check:**
       - If `i == 1` (top row), `i == 7` (bottom row), `j == 1` (first column), or `j == 8` (last column), print an asterisk (`*`).
       - Otherwise, print a space (`" "`).

4. **End of Inner Loop:**
   - After printing all characters for one row, **print a newline** character to move to the next row.

5. **End of Outer Loop:**
   - Repeat steps 3-4 until all 7 rows are printed.

6. **Stop the program.**

---


