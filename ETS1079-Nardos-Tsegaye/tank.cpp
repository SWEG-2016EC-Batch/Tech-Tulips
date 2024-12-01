#include <iostream>

using namespace std;

int main()
{
    float gallon, miles, capacity;
   cout<<"Input the amount of gallons of an automobile fuel \n";
   cin>>gallon;
   if(cin.fail()){
        cout << "ERROR! invalid input.";
        return 0;
    }
    cout<<"The capacity of your automobile per gallon: \n";
   cin>>capacity;
   if(cin.fail()){
        cout << "ERROR! invalid input.";
        return 0;
    }
   miles=capacity*gallon;
   cout<<"You can drive "<<miles<<" miles without refueling."<<endl;
    return 0;
}
