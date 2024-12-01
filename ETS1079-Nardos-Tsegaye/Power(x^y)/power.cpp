#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   double x,y,answer(x^y);
   cout<<"Enter the value of X : \n";
   cin>>x;
   if(cin.fail()){
        cout << "ERROR! invalid input.";
        return 0;
    }
   cout<<"Enter the value of Y : \n";
   cin>>y;
   if(cin.fail()){
        cout << "ERROR! invalid input.";
        return 0;
    }
   answer(x^y)=pow(x,y);
   cout<<x<<" the power of "<<y<<" is: "<<answer(x^y)<<endl;
   return 0;
}
