#include <iostream>

using namespace std;

int main()
{  string name;
   double wrk_hrs, bns_rate,base_slry, bonus, gross_slry, tax, pension, net_slry;
    cout<<"Input Employee Name: \n";
    cin>>name;
    cout<<"Input Weakly working hours: \n";
    cin>>wrk_hrs;
    cout<<"Input Bonus rate per hour: \n";
    cin>>bns_rate;
    cout<<"Input base salary: \n";
    cin>>base_slry;
    bonus=wrk_hrs*bns_rate;
    gross_slry= base_slry + bonus;
    tax= gross_slry*0.15;
    pension= gross_slry*0.5;
    net_slry= gross_slry-pension-tax;
    cout<<name<<endl;
    cout<<"Gross salary is: "<<gross_slry<<endl;
    cout<<"Net salary is: "<<net_slry<<endl;
    cout<<"Bonus payment is: "<<bonus<<endl;
    return 0;
}
