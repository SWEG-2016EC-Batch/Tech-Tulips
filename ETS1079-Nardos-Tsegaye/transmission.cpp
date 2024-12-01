#include <iostream>

using namespace std;

int main()
{
    int character=960;
   float MB,file_size,total_sec,total_hours,total_days, total_minutes;
   	cout<<"Enter the file size in bytes: \n";
	cin>>file_size;
    if(cin.fail()){
        cout << "ERROR! invalid input.";
        return 0;
    }
	//one byte is one character
	total_sec=file_size/character;
	//using hour to store large number of seconds
        total_minutes = total_sec / 60;
	    total_hours = total_minutes / 60;
	    total_days = total_hours / 24;
 	cout<<"Your file takes "<<total_days<<" days, "<<total_hours<<" hours, "<<total_minutes<<" minutes, "<<total_sec<<" seconds"<<endl;
    return 0;
}
