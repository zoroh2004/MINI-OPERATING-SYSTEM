#include <iostream>
using namespace std;

char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
char current_player = 'X';

void display_board() {
    cout << board[0][0] << "|" << board[0][1] << "|" << board[0][2] << endl;
    cout << "-+-+-" << endl;
    cout << board[1][0] << "|" << board[1][1] << "|" << board[1][2] << endl;
    cout << "-+-+-" << endl;
    cout << board[2][0] << "|" << board[2][1] << "|" << board[2][2] << endl;
}

bool make_move(int choice) {
    int row = (choice - 1) / 3;
    int col = (choice - 1) % 3;
    if (board[row][col] != 'X' && board[row][col] != 'O') {
        board[row][col] = current_player;
        return true;
    }
    return false;
}

bool check_win() {
    // Check rows, columns, and diagonals
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) return true;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) return true;
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) return true;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) return true;
    return false;
}

bool is_draw() {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (board[i][j] != 'X' && board[i][j] != 'O') return false;
    return true;
}

int main() {
    while (true) {
        display_board();
        cout << "Player " << current_player << ", enter a number (1-9): ";
        int choice;
        cin >> choice;
        if (choice < 1 || choice > 9 || !make_move(choice)) {
            cout << "Invalid move! Try again." << endl;
            continue;
        }
        if (check_win()) {
            display_board();
            cout << "Player " << current_player << " wins!" << endl;
            break;
        }
        if (is_draw()) {
            display_board();
            cout << "Game is a draw!" << endl;
            break;
        }
        current_player = (current_player == 'X') ? 'O' : 'X';
    }
    cout << "Press Enter to exit..." << endl;
    cin.ignore();
    cin.get();
    return 0;
}
