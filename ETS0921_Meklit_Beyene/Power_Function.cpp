#include<iostream>
#include<cmath>
using namespace std;
int main(){
int x,y,power;
cout<<"please enter the value of x:"<<endl;
cin>>x;
if(cin.fail()){
    cout<<"invalid input"<<endl;
    return 0;
    }
cout<<"please enter the value of y:"<<endl;
cin>>y;
if(cin.fail()){
    cout<<"invalid input"<<endl;
    return 0;
}
power=pow(x,y);
cout<<"the value of x the power of y is"<<" "<<power<<endl;
return 0;

}
