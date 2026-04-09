#include <iostream>
#include <string>
using namespace std;

int main() {
    char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
    int turn = 1;
    char mark;
    int choice;
    bool win = false;

    while (turn <= 9 && !win) {
        cout << "***********************" << endl;
        cout << "* TIC TAC TOE      *" << endl;
        cout << "***********************" << endl;

        for (int i = 0; i < 3; i++) {
            cout << "     ";
            for (int j = 0; j < 3; j++) {
                cout << board[i][j];
                if (j < 2) cout << " | ";
            }
            cout << endl;
            if (i < 2) cout << "    -----------" << endl;
        }
        cout << "***********************" << endl;

        if (turn % 2 != 0) {
            mark = 'X';
            cout << "Player 1 (X), enter box: ";
        } else {
            mark = 'O';
            cout << "Player 2 (O), enter box: ";
        }

        cin >> choice;

        int row = (choice - 1) / 3;
        int col = (choice - 1) % 3;

        if (choice >= 1 && choice <= 9 && board[row][col] != 'X' && board[row][col] != 'O') {
            board[row][col] = mark;
        } else {
            cout << "Invalid move! Try again." << endl;
            continue;
        }

        for (int i = 0; i < 3; i++) {
            if ((board[i][0] == board[i][1] && board[i][1] == board[i][2]) ||
                (board[0][i] == board[1][i] && board[1][i] == board[2][i])) {
                win = true;
            }
        }
        if ((board[0][0] == board[1][1] && board[1][1] == board[2][2]) ||
            (board[0][2] == board[1][1] && board[1][1] == board[2][0])) {
            win = true;
        }

        if (!win) turn++;
    }

    for (int i = 0; i < 3; i++) {
        cout << "     ";
        for (int j = 0; j < 3; j++) {
            cout << board[i][j];
            if (j < 2) cout << " | ";
        }
        cout << endl;
        if (i < 2) cout << "    -----------" << endl;
    }

    if (win) {
        if (turn % 2 != 0) cout << "⋆˚꩜｡ PLAYER 1 WINS, WELL DONE DIVA!!⋆˚꩜｡" << endl;
        else cout << " ᯓ★ PLAYER 2 WINS, WELL DONE DIVA!!!ᯓ★" << endl;
    } else {
        cout << "IT'S A DRAW" << endl;
        cout << "Oh look at that! That was a high-speed chase to a brick wall LOL." << endl;
    }

    return 0;
}
