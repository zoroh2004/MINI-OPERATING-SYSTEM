#include <iostream>
using namespace std;

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    char choice;
    do {
        cout << "Prime Number Checker\n";
        cout << "Enter a number: ";
        int n;
        cin >> n;
        if (is_prime(n)) cout << n << " is prime.\n";
        else cout << n << " is not prime.\n";
        cout << "Check another number? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    cout << "Exiting...\n";
    return 0;
}
