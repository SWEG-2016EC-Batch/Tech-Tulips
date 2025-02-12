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
    long long character=fileSize*256;

    // Calculate the time it will take to transmit the file (in seconds)
    long long timeInSeconds = character/ transmissionRate;

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
