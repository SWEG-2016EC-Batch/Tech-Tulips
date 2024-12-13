#include <iostream>

using namespace std;

int main()
{ int r,c; //r=row and c=column
cout<<"Enter row: ";
cin>>r;
cout<<"Enter column: ";
cin>>c;
  char alphabet='A';
    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++){
            cout<<alphabet;
                alphabet++;
}cout<<endl;
    }
}
