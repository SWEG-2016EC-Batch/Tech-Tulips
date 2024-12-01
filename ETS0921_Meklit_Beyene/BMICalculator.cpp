#include<iostream>
using namespace std;
int main(){
float height,weight,BMI,num_reptition;
cout<<"please enter number of people you want to calculate BMI for:"<<endl;
cin>>num_reptition;
if(cin.fail()|| num_reptition<=0){
   cout<<"invalid input. Please enter a positive number!"<<endl;
 return 0;
}
for(int i=1;i<=num_reptition;i++){
cout<<"please enter your weight in(kg):"<<endl;
cin>>weight;
if(cin.fail()|| weight<=0){
    cout<<"invalid input. Please enter a positive number!"<<endl;
    return 0;}
cout<<"please enter your height in(meter):"<<endl;
cin>>height;
if(cin.fail() || height<=0){
    cout<<"invalid input. Please enter a positive number!"<<endl;
    return 0;}
BMI=weight/(height*height);
cout<<"your body mass index is:"<<" "<<BMI<<endl;
if(BMI<18.5){
    cout<<"under weight"<<endl;
}else if(BMI>25){
    cout<<"over weight"<<endl;
}else{
    cout<<"normal weight"<<endl;
}}
return 0;
}



