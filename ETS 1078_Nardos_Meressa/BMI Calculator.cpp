/* A program that find the BMI of a person given height and weight and
 * determine the level of BMI for multiple person.
 * using do while loop
 */

#include <iostream>

using namespace std;

int main()
{
   // Declare required variables to store the weight, height and bmi  
 int cont;
 float w,h, BMI;
do{
 cout<<"Input your weight \n";
 cin>>w;
 cout<<"Input your height \n";
 cin>>h;
 BMI=w/(h*h);
 cout<<"Your Body mass Index is : "<<BMI<<endl;
 if(BMI<18.5){
     cout<<"Under weight. \n";
 }
 else if(BMI>=18.5 && BMI<=24.9){
    cout<<"Normal weight. \n";
 }else if(BMI<=25) {
     cout<<"Over weight. \n";}
 cout<<"Enter 0 to stop or 1 to continue \n";
 cin>>cont;
 }while(cont!=0);
    return 0;
}
