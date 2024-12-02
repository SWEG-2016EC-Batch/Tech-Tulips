

## **Input**
1. `file_size`: The size of the file in bytes (float).

---

## **Process**
1. Prompt the user to enter the file size in bytes (`file_size`).
2. Calculate the transmission time in seconds (`sec`) using the formula:
   \[
   \text{sec} = \frac{\text{file\_size}}{960}
   \]
   where 960 represents the number of bytes that can be transmitted per second.
3. Convert the transmission time from seconds to hours (`hour`) using the formula:
   \[
   \text{hour} = \frac{\text{sec}}{3600}
   \]
   (since there are 3600 seconds in an hour).
4. Display the file transmission time in hours.

---

## **Output**
- The file transmission time in hours.



## **Pseudocode**

1. **Start**
2. Declare variables:
   - `character` as integer (set to 960, representing bytes per second).
   - `file_size` as float (for the size of the file in bytes).
   - `sec` as float (for the file transmission time in seconds).
   - `hour` as float (for the file transmission time in hours).
3. Print "Enter the file size in bytes:"
4. Input `file_size`
5. Calculate `sec` as:
   \[
   \text{sec} = \frac{\text{file\_size}}{\text{character}}
   \]
6. Calculate `hour` as:
   \[
   \text{hour} = \frac{\text{sec}}{3600}
   \]
7. Print "Your file takes ", `hour`, " hour to send the file."
8. **End**

