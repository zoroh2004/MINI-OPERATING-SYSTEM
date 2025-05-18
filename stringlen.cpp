#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    char choice;
    do {
        cout << "String Length Calculator\n";
        cout << "Enter a string: ";
        cin.ignore(1, '\n');
        getline(cin, str);
        cout << "Length of \"" << str << "\": " << str.length()<< endl;
        cout << "Enter another string? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    cout << "Exiting...\n";
    return 0;
}
