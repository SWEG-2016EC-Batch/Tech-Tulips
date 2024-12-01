#include<iostream>
#include<cmath>
using namespace std;
int main(){
const int characterPerSecond=960;
double fileSize;
cout<<"please enter the file size in bytes:"<<endl;
cin>>fileSize;
if(cin.fail()){
    cout<<"invalid input. please enter positive number!"<<endl;
    return 0;
}
double transmissionTimeSeconds=fileSize/characterPerSecond;
 int days=transmissionTimeSeconds/(24*3600);
transmissionTimeSeconds=fmod(transmissionTimeSeconds,24*3600);
int hours=transmissionTimeSeconds/3600;
transmissionTimeSeconds=fmod(transmissionTimeSeconds,3600);
int minutes=transmissionTimeSeconds/60;
transmissionTimeSeconds=fmod(transmissionTimeSeconds,60);
int seconds=transmissionTimeSeconds;
cout<<"time taken to transmit the file is:"<<" "<<days<<" "<<"days,"<<" "<<hours<<" "<<"hours,"<<minutes<<" "<<"minutes,"
<<" "<<seconds<<" "<<"seconds."<<endl;
}
