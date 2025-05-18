#include <iostream>
#include <ctime>
#include <unistd.h>
using namespace std;

void display_time() {
    time_t now = time(0); // Get current time
    tm *ltm = localtime(&now); // Convert to local time
    cout << "Current Time: ";
    cout << (ltm->tm_hour < 10 ? "0" : "") << ltm->tm_hour << ":";
    cout << (ltm->tm_min < 10 ? "0" : "") << ltm->tm_min << ":";
    cout << (ltm->tm_sec < 10 ? "0" : "") << ltm->tm_sec;
    cout << endl;
}

int main() {
    char choice;
    do {
        cout << "Live Real-Time Clock\n";
        cout << "Press Ctrl+C to stop or choose 'n' to exit after each cycle.\n";
        for (int i = 0; i < 5; i++) { // Display for 5 seconds per cycle
            system("clear"); // Clear screen for smooth update
            cout << "Live Real-Time Clock\n";
            display_time();
            sleep(1); // Wait 1 second
        }
        cout << "Continue watching time? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    cout << "Exiting...\n";
    return 0;
}
