#include <iostream>
using namespace std;

int main() {
    int r; //r=row
cout<<"Enter row: ";
cin>>r;
for (int i=r; i >= 1; i--) {
                for (int j=i; j>0; j--){
                    if(i==1||i==r||j==1||j==i){
                    cout << "*";
                    }
                    else{
                    cout<<" ";
                    }
                }cout << endl;
            }
      cout << endl;
    }
