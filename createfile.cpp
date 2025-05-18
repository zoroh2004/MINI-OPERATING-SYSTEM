#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    char choice;
    do {
        string filename, content;
        cout << "Create File\n";
        cout << "Enter filename (e.g., test.txt): ";
        cin >> filename;
        cout << "Enter content: ";
        cin.ignore();
        getline(cin, content);
        ofstream file(filename);
        if (file.is_open()) {
            file << content;
            file.close();
            cout << "File " << filename << " created successfully.\n";
        } else {
            cout << "Error creating file!\n";
        }
        cout << "Create another file? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    cout << "Exiting...\n";
    return 0;
}
