#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    int choice,num,remain,rev=0,count=0,product=1,first=0,last=0,palindrome,swapped_num=0,freq=0,fact=1,sum=0;
    cout << "1. Reverse of the number" << endl;
    cout << "2. Number of digits" << endl;
    cout << "3. Product of even digits" << endl;
    cout << "4. First and last digit" << endl;
    cout << "5. Swap first and last digit" << endl;
    cout << "6. Palindrome or not" << endl;
    cout << "7. Frequency of each digit" << endl;
    cout << "8. Strong or not" << endl;
    cout << "9. Perfect number or not" << endl;

    cout << "Enter your choice : ";
    cin >> choice;
    cout<<"Enter the number: ";
    cin>>num;

    switch(choice) {
      case 1: 
    
           while (num > 0) {
                remain = num % 10;
                rev = (rev * 10) + remain;
                num /= 10;
            }
            cout << "The reverse of the number: " << rev << endl;
            break;
      case 2:

            while (num > 0) {
                count++;
                num /= 10;
            }
            cout << "Number of digits: " << count << endl;
             break;
      case 3:
         
            while (num > 0) {
                remain = num%10;
                if (remain % 2 == 0) {
                    product*= remain;
                }
                num /= 10;
            }
            cout << "Product of even digits: " << product<< endl;
             break;
      case 4:
         
            while (num > 0) {
                remain = num % 10;
                if (last== 0) {
                    last = remain;
                }
                first = remain;
                num/= 10;
            }
            cout<<"First and last digit are: "<<first<<" and "<<last<<" respectively"<<endl;
             break;
      case 5:
           
            while (num > 0) {
                remain = num % 10;
                if (remain == first) {
                    remain = last;
                } else if (remain == last) {
                    remain = first;
                }
                swapped_num =swapped_num * 10 + remain;
                num /= 10;
            }
            cout << "Number after swapping: " <<swapped_num<< endl;
             break;
      case 6:
               
           while (num > 0) {
                rev = (rev * 10) + num % 10;
                num /= 10;

            if (num=rev) {
                cout << "The number is palindrome" << endl;
            } else  {
                cout << "The number is not palindrome" << endl;
            }
             break;
       case 7:

             while (num > 0) {
        remain= num % 10;
        freq[remain]++;
        num /= 10;
            }
    
          cout << "Digit\tFrequency" << endl;
        for (int i = 0; i < 10; i++) {
        if (freq[i] > 0) {
            cout << i << "\t" << freq[i] << endl;
        }
           }
            break;
       case 8:
        
            while (num > 0) {
                remain = num% 10;
                for (int i = 1; i <= remain; i++) {
                    fact *= i;
                }
                sum+=fact;
                num/= 10;
            }
            if (sum==num) {
                cout << "It is strong number" << endl;
            } else {
                cout << "It is not strong number" << endl;
            }
             break;
       case 9:
         
            for (int i = 1; i < num; i++) {
                if (num % i == 0) {
                    sum+= i;
                }
            }
            if (sum==num) {
                cout << "It is perfect number" << endl;
            } else {
                cout << "It is not perfect number" << endl;
            }
             break;
     }
      return 0;
}
}
