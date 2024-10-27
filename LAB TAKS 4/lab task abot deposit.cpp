#include<iostream>
using namespace std;
int main()
{
	   char operation;
    double amount, finalAmount;
    cout << "Choose an operation (D - Deposit, W - Withdraw, T - Transfer): ";
    cin >> operation;
    cout << "Enter the amount: ";
    cin >> amount;
    switch (operation) {
    case 'd':
    finalAmount = amount - (0.5 / 100 * amount);  // 0.5% charges
    cout << "Deposit successful. Final amount after charges: " << finalAmount << endl;
    break;
    case 'w':
    finalAmount = amount - (1.5 / 100 * amount);  // 1.5% charges
    cout << "Withdrawal successful. Final amount after charges: " << finalAmount << endl;
    break;
    case 't':
    finalAmount = amount - (2.5 / 100 * amount);  // 2.5% charges
    cout << "Transfer successful. Final amount after charges: " << finalAmount << endl;
    break;
    default:
    cout << "Invalid operation." << endl;
    }
    return 0;


return 0;
}
