#include<iostream>
using namespace std;
int main () {
    int character = 960;
    float file_size, sec, hour, MB;
    cout << "Enter the file size in bytes: ";
    cin >> file_size;
    sec = file_size/ character;
    hour = sec/3600;
    cout << "\nYour file takes " << hour << " hour to send a file.";
}
