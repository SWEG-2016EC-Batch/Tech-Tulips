#include <iostream>
using namespace std;

int main() {
    double test, quiz, project, assignment, finalExam, total;
    char grade;

    cout << "Enter the Test mark (out of 100): ";
    cin >> test;

    cout << "Enter the Quiz mark (out of 100): ";
    cin >> quiz;

    cout << "Enter the Project mark (out of 100): ";
    cin >> project;

    cout << "Enter the Assignment mark (out of 100): ";
    cin >> assignment;

    cout << "Enter the Final Exam mark (out of 100): ";
    cin >> finalExam;

    total = (test * 0.15) + (quiz * 0.05) + (project * 0.20) + (assignment * 0.10) + (finalExam * 0.50);

    if (total >= 90) {
        grade = 'A+';
    } else if (total >= 80) {
        grade = 'A';
    } else if (total >= 75) {
        grade = 'B+';
    } else if (total >= 60) {
        grade = 'B';
    } else if (total >= 55) {
        grade = 'C+';
    } else if (total >= 45) {
        grade = 'C';
    } else if (total >= 30) {
        grade = 'D';
    } else {
        grade = 'F';
    }

    cout << "Total Marks: " << total << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
