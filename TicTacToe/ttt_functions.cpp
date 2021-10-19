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

};