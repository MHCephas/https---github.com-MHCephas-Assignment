#include <iostream>
using namespace std;

int main()
 {
    // Account information
    double accountBalance = 10000.0;
    double dailyLimit = 5000.0;
    double withdrawalAmount;

    // Get withdrawal amount from user
    cout<< "Enter the withdrawal amount: $";
    cin >> withdrawalAmount;

    // Check if withdrawal amount is within daily limit
    if (withdrawalAmount > dailyLimit) {
        cout << "Transaction failed. Exceeds daily withdrawal limit." << endl;
    } else {
        // Check if withdrawal amount is within account balance
        if (withdrawalAmount > accountBalance) {
            cout << "Transaction failed. Insufficient funds." << endl;
        } else {
            // Process withdrawal
            accountBalance -= withdrawalAmount;
            cout << "Transaction successful. Remaining balance: $" << accountBalance << endl;
        }
    }

    return 0;
}
