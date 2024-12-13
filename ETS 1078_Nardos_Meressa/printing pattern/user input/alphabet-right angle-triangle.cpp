#include <iostream>

using namespace std;

int main()
{
 int r; //r=row
cout<<"Enter row: ";
cin>>r;

   char alphabet='A';
   for(int i=0; i<=r-1; i++){
        for(char alphabet='A'; alphabet<='A'+i; alphabet++){
            cout<<alphabet;
        }cout<<endl;
    }
}
