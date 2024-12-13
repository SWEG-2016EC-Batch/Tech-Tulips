#include <iostream>
using namespace std;

int main() {
    int r; //r=row
cout<<"Enter row: ";
cin>>r;
           for (int i=r; i >= 1; i--) {
                for (int j = i; j>0; j--){
                    cout << "*";
                }cout << endl;
            }
            return 0;
}
