#include <iostream>
#include <string>
using namespace std;

int main() {
    char b1 = '1', b2 = '2', b3 = '3', b4 = '4', b5 = '5', b6 = '6', b7 = '7', b8 = '8', b9 = '9';
    int turn = 1;
    char mark;
    int choice;
    bool win = false;

    while (turn <= 9 && !win) {
        cout << "***********************" << endl;
        cout << "* TIC TAC TOE      *" << endl;
        cout << "***********************" << endl;
        cout << "     " << b1 << " | " << b2 << " | " << b3 << endl;
        cout << "    -----------" << endl;
        cout << "     " << b4 << " | " << b5 << " | " << b6 << endl;
        cout << "    -----------" << endl;
        cout << "     " << b7 << " | " << b8 << " | " << b9 << endl;
        cout << "***********************" << endl;

        if (turn % 2 != 0) {
            mark = 'X'; 
            cout << "Player 1 (X), enter box: ";
        } else {
            mark = 'O';
            cout << "Player 2 (O), enter box: ";
        }

        cin >> choice;

        if (choice == 1 && b1 == '1') b1 = mark;
        else if (choice == 2 && b2 == '2') b2 = mark;
        else if (choice == 3 && b3 == '3') b3 = mark;
        else if (choice == 4 && b4 == '4') b4 = mark;
        else if (choice == 5 && b5 == '5') b5 = mark;
        else if (choice == 6 && b6 == '6') b6 = mark;
        else if (choice == 7 && b7 == '7') b7 = mark;
        else if (choice == 8 && b8 == '8') b8 = mark;
        else if (choice == 9 && b9 == '9') b9 = mark;
        else {
            cout << "Invalid move! Try again." << endl;
            continue;
        }

        if ((b1 == b2 && b2 == b3) || (b4 == b5 && b5 == b6) || (b7 == b8 && b8 == b9) ||
            (b1 == b4 && b4 == b7) || (b2 == b5 && b5 == b8) || (b3 == b6 && b6 == b9) ||
            (b1 == b5 && b5 == b9) || (b3 == b5 && b5 == b7)) {
            win = true;
        } else {
            turn++;
        }
    }

    cout << "     " << b1 << " | " << b2 << " | " << b3 << endl;
    cout << "    -----------" << endl;
    cout << "     " << b4 << " | " << b5 << " | " << b6 << endl;
    cout << "    -----------" << endl;
    cout << "     " << b7 << " | " << b8 << " | " << b9 << endl;

    if (win) {
        if (turn % 2 != 0) cout << "⋆˚꩜｡ PLAYER 1 WINS, WELL DONE DIVA!!⋆˚꩜｡" << endl;
        else cout << " ᯓ★ PLAYER 2 WINS, WELL DONE DIVA!!!ᯓ★"<< endl;
    } else {
        cout << "IT'S A DRAW " << endl;
        cout << "Oh look at that!That was a high-speed chase to a brick wall LOL." <<endl; 
    }

    return 0;
}