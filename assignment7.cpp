#include <iostream>
using namespace std;

int main() {
    int daysLate;
    char bookType;
    double fine;

    // Ask the user for the number of days late and the book type
    cout << "Enter the number of days late: ";
    cin >> daysLate;
    cout << "Enter the type of book (R for regular, C for children's, or X for reference): ";
    cin >> bookType;

    // Calculate the late fee based on the number of days late and the book type
    if (daysLate <= 0) {
        fine = 0.0;  // No late fee for on-time returns
    } else if (bookType == 'R') {
        fine = 0.25 * daysLate;  // Regular book late fee is $0.25 per day
    } else if (bookType == 'C') {
        fine = 0.15 * daysLate;  // Children's book late fee is $0.15 per day
    } else if (bookType == 'X') {
        fine = 0.50 * daysLate;  // Reference book late fee is $0.50 per day
    } else {
        cout << "Invalid book type. Please enter R, C, or X." << endl;
    }
    // Display the late fee to the user
    cout << "Late fee for returning the book: $" << fine << endl;

    return 0;
}
