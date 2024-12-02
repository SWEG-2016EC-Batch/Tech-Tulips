#include <iostream>
using namespace std;
int main () {
    int X, Y, i, p=1;
    cout << "Enter the base: "<< endl;
    cin >> X;
    cout << "Enter the power: " << endl;
    cin >> Y;
    for (i=1; i<=Y; i++) {

p=p*X;
    }
    cout << "Result: " << p;
}
