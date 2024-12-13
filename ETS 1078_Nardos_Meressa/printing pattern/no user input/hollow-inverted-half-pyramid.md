# **Pseudo Code for Hollow Inverted Half Pyramid**

## **Input**
No explicit input from the user.

## **Output**
A hollow inverted right-angled triangle pattern made of asterisks (`*`), with 6 rows:


---

## **Pseudo Code**

1. **Start the program.**

2. **Outer Loop (rows):**
   - Initialize `i` to `6`.
   - Loop while `i >= 1` (inclusive):
     - Each iteration represents one row of the inverted pyramid.

3. **Inner Loop (columns):**
   - Initialize `j` to `1`.
   - Loop until `j <= i`:
     - **Condition Check:**
       - If `i == 6` (top row), `j == 1` (first column), or `j == i` (last column), print an asterisk (`*`).
       - Otherwise, print a space (`" "`).

4. **End of Inner Loop:**
   - After printing spaces and asterisks for one row, **print a newline** character to move to the next row.

5. **End of Outer Loop:**
   - Repeat steps 3-4 until all rows are printed.

6. **Stop the program.**

---





