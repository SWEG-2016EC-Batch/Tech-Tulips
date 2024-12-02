# System Design for File Transfer Time Calculator

## Input
1. **File Size in Bytes**: Float data type

## Output
1. **Total Time in Seconds**: Float data type
2. **Total Time in Minutes**: Float data type
3. **Total Time in Hours**: Float data type
4. **Total Time in Days**: Float data type

## Operation
1. **Division**: Calculate the total seconds by dividing the file size by the number of characters (assuming 1 byte = 1 character).
2. **Conversion**: Convert seconds to minutes, hours, and days.

## Pseudo Code

1. **Start** the program.
2. **Declare** `character` as `int` with value `960`, and `file_size`, `total_sec`, `total_minutes`, `total_hours`, and `total_days` as `float`.
3. **Prompt** the user to input the file size in bytes.
4. **Take** the input for `file_size` and store it in the `file_size` variable.
5. **Check** if the input for `file_size` is valid using `cin.fail()`. If invalid, print an error message and stop the program.
6. **Calculate** the total seconds as `total_sec = file_size / character`.
7. **Convert** seconds to minutes: `total_minutes = total_sec / 60`.
8. **Convert** minutes to hours: `total_hours = total_minutes / 60`.
9. **Convert** hours to days: `total_days = total_hours / 24`.
10. **Print** the total time in the format: `Your file takes ` + `total_days` +  + `total_hours`  + `total_minutes` + ` total_seconds`
11. **Stop**
## Flowchart
![Blank diagram (8)](https://github.com/user-attachments/assets/ec6d0631-2839-4bb6-a698-66f88ef4c07b)


