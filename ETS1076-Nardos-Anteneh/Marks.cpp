#include <iostream>
using namespace std;

int main(){
    double test, quiz, project, assignment, finalScore, total;
    
    cout << "Enter score obtained for test out of (15%): ";
    cin >> test;
    if (cin.fail() || test > 15) {
        cout << "Invalid input\n";
        cin.clear();
        cin.ignore();
        return 1;
    }

    cout << "Enter score obtained for quiz out of (5%): ";
    cin >> quiz;
    if (cin.fail() || quiz > 5) {
        cout << "Invalid input\n";
        cin.clear();
        cin.ignore();
        return 1;
    }

    cout << "Enter score obtained for project out of (20%): ";
    cin >> project;
    if (cin.fail() || project > 20) {
        cout << "Invalid input\n";
        cin.clear();
        cin.ignore();
        return 1;
    }

    cout << "Enter score obtained for assignment out of (10%): ";
    cin >> assignment;
    if (cin.fail() || assignment > 10) {
        cout << "Invalid input\n";
        cin.clear();
        cin.ignore();
        return 1;
    }

    cout << "Enter score obtained for final exam out of (50%): ";
    cin >> finalScore;
    if (cin.fail() || finalScore > 50) {
        cout << "Invalid input\n";
        cin.clear();
        cin.ignore();
        return 1;
    }

    total = (test * 1) + (quiz * 1) + (project * 1) + (assignment * 1) + (finalScore * 1);
    cout << "Your total score is: " << total << endl;

    if (total >= 90) {
        cout << "Grade: A+" << endl;
    } else if (total >= 80) {
        cout << "Grade: A" << endl;
    } else if (total >= 75) {
        cout << "Grade: B+" << endl;
    } else if (total >= 60) {
        cout << "Grade: B" << endl;
    } else if (total >= 55) {
        cout << "Grade: C+" << endl;
    } else if (total >= 45) {
        cout << "Grade: C" << endl;
    } else if (total >= 30) {
        cout << "Grade: D" << endl;
    } else {
        cout << "Grade: F" << endl;
    }

    return 0;
}
