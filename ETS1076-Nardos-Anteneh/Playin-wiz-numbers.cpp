#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int num, choice;

    cout << "Enter a number: ";
    cin >> num;

    cout << "1. Reverse of the number" << endl;
    cout << "2. Number of digits" << endl;
    cout << "3. Sum of digits" << endl;
    cout << "4. Product of even digits" << endl;
    cout << "5. First and last digit" << endl;
    cout << "6. Swap first and last digit" << endl;
    cout << "7. Palindrome" << endl;
    cout << "8. Frequency of first digit" << endl;
    cout << "9. Strong number" << endl;
    cout << "10. Perfect number" << endl;
    cout << "11. Exit" << endl;

    cout << "Enter your choice: ";
    cin >> choice;

    int temp = num, digit = 0, rev = 0, first = 0, last = num % 10;

    switch (choice) {
        case 1: // Reverse the number
            while (temp > 0) {
                digit = temp % 10;
                rev = rev * 10 + digit;
                temp /= 10;
            }
            cout << "Reverse of the number: " << rev << endl;
            break;

        case 2: { // Count digits
            int count = 0;
            temp = num;
            while (temp > 0) {
                count++;
                temp /= 10;
            }
            cout << "Number of digits: " << count << endl;
            break;
        }

        case 3: { // Sum of digits
            int sum = 0;
            temp = num;
            while (temp > 0) {
                digit = temp % 10;
                sum += digit;
                temp /= 10;
            }
            cout << "Sum of digits: " << sum << endl;
            break;
        }

        case 4: { // Product of even digits
            int prod = 1;
            bool hasEven = false;
            temp = num;
            while (temp > 0) {
                digit = temp % 10;
                if (digit % 2 == 0) {
                    prod *= digit;
                    hasEven = true;
                }
                temp /= 10;
            }
            if (hasEven)
                cout << "Product of even digits: " << prod << endl;
            else
                cout << "No even digits in the number." << endl;
            break;
        }

        case 5: { // First and last digit
            temp = num;
            while (temp > 0) {
                first = temp % 10;
                temp /= 10;
            }
            cout << "First and last digit: " << first << " and " << last << endl;
            break;
        }

        case 6: { // Swap first and last digit
            temp = num;
            int count = 0, divisor = 1;
            while (temp > 0) {
                first = temp % 10;
                temp /= 10;
                count++;
                divisor *= 10;
            }
            divisor /= 10; // Adjust divisor for the number size

            int middle = (num % divisor) / 10; // Extract middle part
            int swapped = (last * divisor) + (middle * 10) + first;
            cout << "Number after swapping: " << swapped << endl;
            break;
        }

        case 7: { // Check palindrome
            temp = num;
            while (temp > 0) {
                digit = temp % 10;
                rev = rev * 10 + digit;
                temp /= 10;
            }
            if (rev == num)
                cout << "Palindrome: Yes" << endl;
            else
                cout << "Palindrome: No" << endl;
            break;
        }

        case 8: { // Frequency of first digit
            temp = num;
            while (temp > 0) {
                first = temp % 10;
                temp /= 10;
            }
            temp = num;
            int freq = 0;
            while (temp > 0) {
                digit = temp % 10;
                if (digit == first) {
                    freq++;
                }
                temp /= 10;
            }
            cout << "Frequency of first digit: " << freq << endl;
            break;
   }case 9: { // Strong number
            temp = num;
            int strong = 0;
            while (temp > 0) {
                digit = temp % 10;
                int fact = 1;
                for (int i = 1; i <= digit; i++) {
                    fact *= i;
                }
                strong += fact;
                temp /= 10;
            }
            if (strong == num)
                cout << "Strong number: Yes" << endl;
            else
                cout << "Strong number: No" << endl;
            break;
        }

        case 10: { // Perfect number
            int perfect = 0;
            for (int i = 1; i < num; i++) {
                if (num % i == 0) {
                    perfect += i;
                }
            }
            if (perfect == num)
                cout << "Perfect number: Yes" << endl;
            else
                cout << "Perfect number: No" << endl;
            break;
        }

        case 11: // Exit
            cout << "Exiting..." << endl;
            break;

        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
    }

    return 0;
}
