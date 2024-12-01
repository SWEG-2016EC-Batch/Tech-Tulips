#include<iostream>
using namespace std;
int main(){
float capacity_in_gallon,miles_per_gallon,number_mile_driven;
cout<<"please enter capacity in gallons of an automobile fuel tank:"<<endl;
cin>>capacity_in_gallon;
if(cin.fail()){
    cout<<"invalid input. Please enter a positive number!"<<endl;
    return 0;
}
cout<<"please enter miles per gallons the automobiles can be driven:"<<endl;
cin>>miles_per_gallon;
if(cin.fail()){
    cout<<"invalid input. Please enter a positive number!"<<endl;
    return 0;
}
number_mile_driven=capacity_in_gallon*miles_per_gallon;
cout<<"number of miles the automobile can be driven without refueling is:"<<" "<<number_mile_driven<<endl;

return 0;

}
