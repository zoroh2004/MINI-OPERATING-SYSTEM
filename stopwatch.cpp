#include <iostream>
#include <unistd.h>
#include <chrono>
using namespace std;

bool is_key_pressed() {
    // Use non-blocking check with cin
    cin.clear();
    cin.sync();
    return cin.rdbuf()->in_avail() > 0;
}

int main() {
    char choice;
    do {
        cout << "Stopwatch\n";
        cout << "Press Enter to start, then any key to stop...\n";
        cin.get(); // Wait for Enter to start
        int seconds = 0;
        auto start = chrono::steady_clock::now();
        cout << "Stopwatch running. Press any key to stop.\n";
        while (true) {
            cout << "Time: " << seconds << " seconds\r"; // \r to update in place
            cout.flush(); // Ensure immediate display
            sleep(1);
            seconds++;
            if (is_key_pressed()) {
                cin.get(); // Clear the input
                break;
            }
        }
        auto end = chrono::steady_clock::now();
        auto duration = chrono::duration_cast<chrono::seconds>(end - start).count();
        cout << "\nStopped at " << duration << " seconds.\n";
        cout << "Run stopwatch again? (y/n): ";
        cin >> choice;
        cin.ignore(); // Clear newline
    } while (choice == 'y' || choice == 'Y');
    cout << "Exiting...\n";
    return 0;
}
