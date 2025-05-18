#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    char choice;
    do {
        int target = rand() % 100 + 1;
        int guess;
        int attempts = 0;
        cout << "Number Guessing Game (1-100)\n";
        do {
            cout << "Enter your guess: ";
            cin >> guess;
            attempts++;
            if (guess > target) cout << "Too high!\n";
            else if (guess < target) cout << "Too low!\n";
            else cout << "Correct! Took " << attempts << " attempts.\n";
        } while (guess != target);
        cout << "Play again? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    cout << "Exiting...\n";
    return 0;
}
