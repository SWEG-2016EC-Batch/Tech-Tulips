#include <iostream>

using namespace std;

int main()
{
   float total, test, quiz, project, assignment, final_exam;
   cout<<"Enter your test mark out of 15%: "<<endl;
   cin>>test;
   cout<<"Enter your quiz mark out of 5%: "<<endl;
   cin>>quiz;
   cout<<"Enter your project mark out of 20%: "<<endl;
   cin>>project;
   cout<<"Enter your assignment mark out of 10%: "<<endl;
   cin>>assignment;
   cout<<"Enter your final exam mark out of 50%: "<<endl;
   cin>>final_exam;
   total = test+quiz+project+assignment+final_exam;
   cout<< "Your total mark is: "<<total<<endl;
   cout<<"Your grade is: ";
   if(total>=90){
    cout<<"A+"<<endl;
   }
   else if(total>=80 && total<90){
    cout<<"A"<<endl;
   }
   else if(total>=75 && total<80){
    cout<<"B+"<<endl;
   }
   else if(total>=60 && total<75){
    cout<<"B"<<endl;
   }
   else if(total>=55 && total<60){
    cout<<"C+"<<endl;
   }
    else if(total>=45 && total<=55){
    cout<<"C"<<endl;
   }
   else if(total>=30 && total<45){
    cout<<"D"<<endl;
   }
   else{
    cout<<"F"<<endl;
   }
   return 0;
}
