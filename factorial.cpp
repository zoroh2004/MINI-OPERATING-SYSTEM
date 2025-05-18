#include <iostream>
using namespace std;

unsigned long long factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    char choice;
    do {
        cout << "Factorial Calculator\n";
        cout << "Enter a non-negative number: ";
        int n;
        cin >> n;
        if (n < 0) {
            cout << "Invalid input!\n";
        } else {
            cout << n << "! = " << factorial(n) << endl;
        }
        cout << "Calculate another factorial? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    cout << "Exiting...\n";
    return 0;
}
