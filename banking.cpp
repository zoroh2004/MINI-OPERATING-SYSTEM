#include <iostream>
using namespace std;

int main() {
    double balance = 0.0;
    int choice;
    do {
        cout << "Banking System\n";
        cout << "1. Deposit\n2. Withdraw\n3. Check Balance\n4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;
        double amount;
        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> amount;
                if (amount > 0) balance += amount;
                else cout << "Invalid amount!\n";
                break;
            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> amount;
                if (amount > 0 && amount <= balance) balance -= amount;
                else cout << "Invalid amount or insufficient funds!\n";
                break;
            case 3:
                cout << "Current balance: $" << balance << endl;
                break;
            case 4:
                cout << "Exiting...\n";
                return 0;
            default:
                cout << "Invalid choice!\n";
        }
        cout << endl;
    } while (true);
    return 0;
}
