#include <iostream>
using namespace std;

int main() 
{
    double num1, num2;

    // Input two numbers from the user
    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    // Determine the maximum number using switch-case
    char choice;
    if (num1 > num2) {
        choice = '1';
    } else if (num2 > num1) {
        choice = '2';
    } else {
        choice = '0'; // Numbers are equal
    }

    switch (choice) {
        case '1':
 cout << "The maximum number is: " << num1 << endl;
            break;
        case '2':
 cout << "The maximum number is: " << num2 << endl;
            break;
        case '0':
  cout << "Both numbers are equal." << endl;
            break;
    }
    return 0;
}
