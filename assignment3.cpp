#include <iostream>
#include <string>
using namespace std;

int main() {
    string fullName, course;
    int score;

    // Input student details
    cout << "Enter student's full name: ";
    getline(cin, fullName);

    cout << "Enter student's course: ";
    getline(cin, course);

    cout << "Enter student's score: ";
    cin >> score;

    // Determine the grade based on the score using a switch-case statement
    char grade;

    switch (score) {
        case 70 ... 100:
            grade = 'A';
            break;
        case 60 ... 69:
            grade = 'B';
            break;
        case 50 ... 59:
            grade = 'C';
            break;
        case 40 ... 49:
            grade = 'D';
            break;
        case 0 ... 39:
            grade = 'F';
            break;
        default:
            grade = 'I'; // I for invalid score
            break;
    }

    // Output the grade
    cout << "Grade = " << grade << endl;

    return 0;
}
