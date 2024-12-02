#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int main(){
string employeeName;
double weeklyHour,bonusRate,baseSalary;
double bonusPayment,grossSalary,pensionDeduction,taxDeduction,netSalary;
const double pensionRate=0.05;
const double taxRate=0.15;

cout<<"please enter employee's name:"<<endl;
cin>>employeeName;
if(cin.fail()){
    cout<<"invalid input."<<endl;
return 0;
}
cout<<"please enter weekly working hours:"<<endl;
cin>>weeklyHour;
if(cin.fail()){
    cout<<"invalid input. please enter a positive number!"<<endl;
return 0;
}
cout<<"please enter bonus rate per hour:"<<endl;
cin>>bonusRate;
if(cin.fail()){
    cout<<"invalid input. please enter a positive number!"<<endl;
return 0;
}
cout<<"please enter base salary:"<<endl;
cin>>baseSalary;
if(cin.fail()){
    cout<<"invalid input. please enter a positive number!"<<endl;
return 0;
}
 bonusPayment=weeklyHour*bonusRate;
 grossSalary=baseSalary+bonusPayment;
 pensionDeduction=grossSalary*pensionRate;
 taxDeduction=grossSalary*taxRate;
 netSalary=grossSalary-pensionDeduction-taxDeduction;

cout<<"employee's name is:"<<" "<<employeeName<<endl;
cout<<"bonus payment is:"<<" "<<bonusPayment<<endl;
cout<<"gross salary is:"<<" "<<grossSalary<<endl;
cout<<"net salary is:"<<" "<<netSalary<<endl;
return 0;
}
