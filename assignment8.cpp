#include <iostream>
using namespace std;

int main() {
    double purchaseAmount;
    double discount = 0.0;
    double totalCost;

    // Ask the user for the purchase amount
    cout << "Enter the purchase amount: $";
    cin >> purchaseAmount;

    // Determine the discount based on the purchase amount
    if (purchaseAmount >= 1000) {
        discount = 0.1;  // 10% discount for purchases of $1000 or more
    } else if (purchaseAmount >= 500) {
        discount = 0.05;  // 5% discount for purchases between $500 and $999.99
    }

    // Calculate the total cost after applying the discount
    totalCost = purchaseAmount - (purchaseAmount * discount);

    // Display the total cost to the user
    cout << "Total cost after applying discount: $" << totalCost << endl;

    return 0;
}
