#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   int x,y,answer;
   cout<<"Enter the value of X : \n";
   cin>>x;
    cout<<"Enter the value of Y : \n";
   cin>>y;
   answer=pow(x,y);
   cout<<x<<" the power of "<<y<<" is: "<<answer<<endl;
   return 0;
}
