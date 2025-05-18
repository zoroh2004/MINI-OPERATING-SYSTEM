#include <iostream>
using namespace std;

int main() {
    char choice;
    double a, b;
    do {
        cout << "Simple Calculator\n";
        cout << "Enter two numbers: ";
        cin >> a >> b;
        cout << "Choose operation (+, -, *, /) or q to quit: ";
        cin >> choice;
        switch (choice) {
            case '+': cout << a << " + " << b << " = " << a + b << endl; break;
            case '-': cout << a << " - " << b << " = " << a - b << endl; break;
            case '*': cout << a << " * " << b << " = " << a * b << endl; break;
            case '/': 
                if (b != 0) cout << a << " / " << b << " = " << a / b << endl;
                else cout << "Error: Division by zero!\n";
                break;
            case 'q': cout << "Exiting...\n"; return 0;
            default: cout << "Invalid operation!\n";
        }
        cout << endl;
    } while (true);
    return 0;
}
