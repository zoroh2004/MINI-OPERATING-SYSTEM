#include <iostream>
#include <string>
using namespace std;

int main() {
    string message;
    char choice;
    do {
        cout << "Message Box\n";
        cout << "Enter a message: ";
        cin.ignore(1, '\n');
        getline(cin, message);
        cout << "Your message: " << message << endl;
        cout << "Enter another message? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    cout << "Exiting...\n";
    return 0;
}
