# Serial Transmission Line Program

## Problem Statement:
A serial transmission line can transmit **960 characters per second**. We are tasked with writing a program that will calculate how long it will take to send a file, given the file size. 

For this example, we will calculate the transmission time for a **400MB file** (which equals **419,430,400 bytes**).

### Program Algorithm (Pseudocode):
1. Define the transmission rate (960 characters per second).
2. Prompt the user for the file size in bytes.
3. Calculate the total time required to send the file using the formula:
\[
   \text{Transmission time in seconds} = \frac{\text{File size in bytes}}{\text{Transmission rate in characters per second}}
\]
4. Convert the transmission time from seconds to days, hours, minutes, and seconds.
5. Output the result in a readable format.

### Program Logic:
- **Input**: File size (in bytes)
- **Output**: Transmission time in days, hours, minutes, and seconds.

### C++ Code Implementation:

```cpp
#include <iostream>
using namespace std;

int main() {
    // Defining the transmission rate in characters per second
    const int transmissionRate = 960; // characters per second
    
    // Variable to hold the file size in bytes
    long long fileSize;

    // Ask the user for the file size in bytes
    cout << "Enter the file size in bytes: ";
    cin >> fileSize;

    // Calculate the time it will take to transmit the file (in seconds)
    long long timeInSeconds = fileSize / transmissionRate;

    // Convert time from seconds to more readable units (days, hours, minutes, seconds)
    long long days = timeInSeconds / (24 * 3600);
    long long hours = (timeInSeconds % (24 * 3600)) / 3600;
    long long minutes = (timeInSeconds % 3600) / 60;
    long long seconds = timeInSeconds % 60;

    // Output the result
    cout << "The time to transmit a file of " << fileSize << " bytes is: " << endl;
    cout << days << " days, " << hours << " hours, " << minutes << " minutes, " << seconds << " seconds." << endl;

    return 0;
}
