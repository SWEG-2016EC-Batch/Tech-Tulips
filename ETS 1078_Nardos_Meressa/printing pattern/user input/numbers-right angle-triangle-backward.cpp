#include <iostream>

using namespace std;

int main()
{
    int r; //r=row
    cout<<"Enter row: ";
    cin>>r;
    for(int i=1; i<=r; i++){
        for(int j=r; j>=i+1; j--){
            cout<<" ";
        }
    for(int k=i; k>0; k--){
            cout<<k;
   
    }cout<<endl;
}
return 0;
}
