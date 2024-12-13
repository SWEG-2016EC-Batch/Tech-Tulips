#include <iostream>
using namespace std;

int main() {
    int rows = 5, columns = 5;

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
