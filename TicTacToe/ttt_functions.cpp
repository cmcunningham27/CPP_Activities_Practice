#include <iostream>
#include <vector>

void display_game(std::vector<std::string> board) {

    // outputs name of game
    std::cout << "\nTic-Tac-Toe!\n\n";

    // displays the board with all 9 positions
    std::cout << " " << board[0] << " | " << board[1] << " | " << board[2] << "\n";
    std::cout << "___|___|___\n";
    std::cout << " " << board[3] << " | " << board[4] << " | " << board[5] << "\n";
    std::cout << "___|___|___\n";
    std::cout << " " << board[6] << " | " << board[7] << " | " << board[8] << "\n";

};

bool check_win(std::vector<std::string> board, bool win1, bool win2) {

    // if first row is all X's return true
    if (board[0] == "X" && board[1] == "X" && board[2] == "X") {
        return true;
    } else if (board[0] == "O" && board[1] == "O" && board[2] == "O") {
        return true;
    };

    // if second row is all X's return true
    if (board[3] == "X" && board[4] == "X" && board[5] == "X") {
        return true;
    } else if (board[3] == "O" && board[4] == "O" && board[5] == "O") {
        return true;
    };

    // if third row is all X's return true
    if (board[6] == "X" && board[7] == "X" && board[8] == "X") {
        return true;
    } else if (board[6] == "O" && board[7] == "O" && board[8] == "O") {
        return true;
    };

    // if first column is all X's return true
    if (board[0] == "X" && board[3] == "X" && board[6] == "X") {
        return true;
    } else if (board[0] == "O" && board[3] == "O" && board[6] == "O") {
        return true;
    };

    //if second column is all X's return true
    if (board[1] == "X" && board[4] == "X" && board[7] == "X") {
        return true;
    } else if (board[1] == "O" && board[4] == "O" && board[7] == "O") {
        return true;
    };

    // if thrid column is all X's return true
    if (board[2] == "X" && board[5] == "X" && board[8] == "X") {
        return true;
    } else if (board[2] == "O" && board[5] == "O" && board[8] == "O") {
        return true;
    };

    // if diagonal from top-left to bottom-right is all X's return true
    if (board[0] == "X" && board[4] == "X" && board[8] == "X") {
        return true;
    } else if (board[0] == "O" && board[4] == "O" && board[8] == "O") {
        return true;
    };

    // if diagonal from top-right to bottom-left is all X's return true
    if (board[2] == "X" && board[4] == "X" && board[6] == "X") {
        return true;
    } else if (board[2] == "O" && board[4] == "O" && board[6] == "O") {
        return true;
    };

};

void end_game(std::string player) {

    std::cout << player << " won!\n";

};