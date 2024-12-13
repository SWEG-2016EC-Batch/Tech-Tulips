#include <iostream>
using namespace std;

int main() {
    int r; //r=row
cout<<"Enter row: ";
cin>>r;
     for (int i = 1; i <=r; i++) {
                for (int j =1; j <=i; j++)
                    cout << " ";
                for (int j =0; j <=r - i; j++)
                    cout << "* ";
                cout << endl;
            }
            cout <<endl;
}
