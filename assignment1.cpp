#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int age, monthsAsCustomer;
    double bankBalance;
    string crbStatus;

// Capture customer details from the user
cout << "Enter customer's age: ";
cin >> age;

cout << "Enter customer's bank balance: ";
cin >> bankBalance;

cout<< "Enter customer's CRB status (good/bad): ";
cin >> crbStatus;

cout<< "Enter the number of months as a customer: ";
cin >> monthsAsCustomer;

// Check loan qualification based on conditions
if (age > 22 && bankBalance > 50000 && crbStatus == "good" && monthsAsCustomer > 6) {
cout << "Customer is qualified for a loan.";
    } else {
cout << "Customer is not qualified for a loan." ;
    }
    return 0;
}