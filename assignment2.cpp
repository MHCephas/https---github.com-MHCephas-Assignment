#include <iostream>
#include <string>
using namespace std;

int main()
 {
    string fullName, course;
    int score;

    // Input student details
    cout << "Enter student's full name: ";
    getline(cin, fullName);

    cout << "Enter student's course: ";
    getline(cin, course);

    cout << "Enter student's score: ";
    cin >> score;

    // Determine the grade based on the score
    char grade;
    if (score >= 70) {
    cout<< "grade = A";
    } else if (score >= 60 && score <= 69) {
    cout<< "grade = B";
    } else if (score >= 50 && score <= 59) {
    cout<< "grade = C";
    } else if (score >= 40 && score <= 49) {
    cout<< "grade = D"; 
   } else if (score < 40 ){
    cout<< "grade = F";
   } else {
    cout<< "grade = I";         // I for invalid score
   }
   return 0;
 }
