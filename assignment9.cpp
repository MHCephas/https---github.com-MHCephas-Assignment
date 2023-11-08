#include <iostream>
using namespace std;

int main() {
    // Variables to store user input
    int age;
    char movieType;

    // Constants for ticket prices
    const double Regular_Price = 100.0;
    const double Senior_discount = 20.0;
    const double Child_discount = 30.0;
    const double ThreeD_price = 50.0;

    // Get user input
    cout << "Enter your age: ";
    cin >> age;

    cout << "Enter the type of movie (R for regular, 3 for 3D): ";
    cin >> movieType;

    // Calculate ticket price based on age and movie type
    double ticketPrice;

    if (age >= 60) {
        ticketPrice = Regular_Price - Senior_discount;
    } else if (age <= 12) {
        ticketPrice = Regular_Price - Child_discount;
    } else {
        ticketPrice = Regular_Price;
    }

    if (movieType == '3') {
        ticketPrice += ThreeD_price;
    }

    // Display the final ticket price
    cout << "Your ticket price is: $" << ticketPrice << endl;

    return 0;
}

