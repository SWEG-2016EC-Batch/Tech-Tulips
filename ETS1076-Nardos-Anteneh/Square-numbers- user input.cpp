#include <iostream>
using namespace std;

int main() {
    int rows, columns;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> columns;

    char ch = 'A';
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << ch << " ";
            ch++;
        }
        cout << endl;
    }
    return 0;
}
