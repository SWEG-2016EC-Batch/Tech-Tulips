#include <iostream>
using namespace std;

int main() {
            for (int i=6; i >= 1; i--) {
                for (int j=i; j>0; j--){
                    if(i==1||i==6||j==1||j==i){
                    cout << "*";
                    }
                    else{
                    cout<<" ";
                    }
                }cout << endl;
            }
    return 0;
} 
