#include<iostream>
using namespace std;
int main()
{int balance, withdrawal;

    cout << "Enter initial balance: ";
    cin >> balance;

    while (true) {
        cout << "Withdraw amount (0 to exit): ";
        cin >> withdrawal;

        if (withdrawal == 0) {
            break;
        }

        if (withdrawal > balance) {
            cout << "Not enough balance." << endl;
            break;
        }

        balance -= withdrawal;
        cout << "Remaining balance: " << balance << endl;
    }

    cout << "Final balance: " << balance << endl;

    return 0;
}




