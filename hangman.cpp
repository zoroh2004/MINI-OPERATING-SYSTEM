#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    string words[] = {"apple", "banana", "cherry", "date"};
    char choice;
    do {
        string word = words[rand() % 4];
        string guessed(word.length(), '_');
        int attempts = 6;
        string used;
        while (attempts > 0 && guessed != word) {
            cout << "Hangman\n";
            cout << "Word: " << guessed << endl;
            cout << "Used letters: " << used << endl;
            cout << "Attempts left: " << attempts << endl;
            cout << "Enter a letter: ";
            char c;
            cin >> c;
            c = tolower(c);
            if (used.find(c) != string::npos) {
                cout << "Letter already used!\n";
                continue;
            }
            used += c;
            bool found = false;
            for (int i = 0; i < word.length(); i++) {
                if (word[i] == c) {
                    guessed[i] = c;
                    found = true;
                }
            }
            if (!found) attempts--;
        }
        if (guessed == word) cout << "Congratulations! You guessed: " << word << endl;
        else cout << "Game over! Word was: " << word << endl;
        cout << "Play again? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');
    cout << "Exiting...\n";
    return 0;
}
