#include <iostream>

using namespace std;

int main()
{
    float basic_slry, working_hrs, bonus_rate,over_time_bonus,bonus,gross_slry,tax, pension,tax_rate, net_slry, extra_wrk_hrs;
    cout<<"Input your basic salary: "<<endl;
    cin>>basic_slry;
     cout<<"Input your working hours: "<<endl;
    cin>>working_hrs;
     cout<<"Input your bonus rate: "<<endl;
    cin>>bonus_rate;

    if(working_hrs>40){
        cout<<"Input your over-time bonus rate/hour: "<<endl;
        cin>>bonus_rate;
        extra_wrk_hrs= working_hrs-40;
    }
    if(gross_slry<200){
        tax_rate=0.0;
    }
    else if(gross_slry<600 && gross_slry>=200){
        tax_rate=0.1;
    }
    else if(gross_slry<1200 && gross_slry>=600){
        tax_rate=0.15;
    }
    else if(gross_slry<2000 && gross_slry>=1200){
        tax_rate=0.2;
    }
    else if(gross_slry<3500 && gross_slry>=2000){
        tax_rate=0.25;
    }
    else if(gross_slry>=3500){
        tax_rate=0.3;
    }
    bonus=working_hrs*bonus_rate;
    gross_slry= basic_slry + bonus+ (extra_wrk_hrs*bonus_rate);
    tax= gross_slry*tax_rate;
    pension= gross_slry*0.7;
    net_slry= (gross_slry-pension-tax);
cout<<"Gross salary is: "<<gross_slry<<endl;
cout<<"Net salary is: "<<net_slry<<endl;
cout<<"Bonus payment is: "<<bonus<<endl;
cout<<"Your net salary/pay is : "<<net_slry<<endl;
}
