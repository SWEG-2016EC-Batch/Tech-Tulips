#include <iostream>

using namespace std;

int main()
{
 int count;
 double w,h, BMI;
do{
 cout<<"Input your weight "<<endl;
 cin>>w;
 cout<<"Input your height "<<endl;
 cin>>h;
 BMI=w/(h*h);
 cout<<"Your Body mass Index is : "<<BMI<<endl;
 if(BMI<18.5){
     cout<<"Under weight. \n";
 }
 else if(BMI>=18.5 && BMI<=24.9){
    cout<<"Normal weight. \n";
 }else {
     cout<<"Over weight."<<endl;
	 }
 cout<<"Enter 0 to stop or any number to continue"<<endl;
 cin>>count;
 }while(count!=0);
    return 0;
}
