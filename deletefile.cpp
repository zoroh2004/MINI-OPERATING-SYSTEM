#include <iostream>
#include <string>
#include <cstdio>
using namespace std;

int main() {
    char choice;
    do {
        string filename;
        cout << "Delete File\n";
        cout << "Enter filename to delete: ";
        cin >> filename;
        if (remove(filename.c_str()) == 0) {
            cout << "File " << filename << " deleted successfully.\n";
        } else {
            cout << "Error deleting file or file not found!\n";
        }
        cout << "Delete another file? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    cout << "Exiting...\n";
    return 0;
}
