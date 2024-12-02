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
 float weight , height, BMI;

   do{
// ask the user to enter their weight and  height.
  
   cout<<"Input your weight \n";
 cin>>weight;
 cout<<"Input your height \n";
 cin>>height;

   // calculate the BMI and print it
   BMI = weight /(height * height);
 cout<<"Your Body mass Index is : "<<BMI<<endl;

   // Determine weight proportionality with height based on BMI
   
   if(BMI<18.5){
     cout<<"You are Under weight. \n";
 }
 else if(BMI>=18.5 && BMI<=24.9){
    cout<<" You are Normal weight. \n";
 }else if(BMI<=25) {
    
    cout<<"You are Over weight. \n";}
 cout<<"Enter 0 to stop or 1 to continue \n";
 cin>>cont;
 }
   while(cont!=0);
    return 0;
}
