#include <iostream>
#include <vector>
#include "ttt_functions.hpp"

int main() {

    // assign a vector with 9 positions starting with strings with spaces
    std::vector<std::string> board = {" ", " ", " ", " ", " ", " ", " ", " ", " "};

    int turns = 1;

    int spot;

    while (turns < 10) {

        display_game(board);

        // determine whose turn it is, starts with Player 1 first (x's)
        if (turns % 2 == 1) {

            std::cout << "Player 1's turn!\n";
            std::cout << "Pick a position from 1-9 that's not already taken.\n";

            std::cin >> spot;

            switch (spot) {
                case 1:
                    board[0] = "X";
                    break;
                case 2:
                    board[1] = "X";
                    break;
                case 3:
                    board[2] = "X";
                    break;
                case 4:
                    board[3] = "X";
                    break;
                case 5:
                    board[4] ="X";
                    break;
                case 6:
                    board[5] ="X";
                    break;
                case 7:
                    board[6] = "X";
                    break;
                case 8:
                    board[7] = "X";
                    break;
                case 9:
                    board[8] ="X";
                    break;
                default:
                    std::cout << "Invalid input\n";
                    break;
            };


        } else {

            std::cout << "Player 2's turn!\n";
            std::cout << "Pick a position from 1-9 that's not already taken.\n";

            std::cin >> spot;

            switch (spot) {
                case 1:
                    board[0] = "O";
                    break;
                case 2:
                    board[1] = "O";
                    break;
                case 3:
                    board[2] = "O";
                    break;
                case 4:
                    board[3] = "O";
                    break;
                case 5:
                    board[4] = "O";
                    break;
                case 6:
                    board[5] = "O";
                    break;
                case 7:
                    board[6] = "O";
                    break;
                case 8:
                    board[7] = "O";
                    break;
                case 9:
                    board[8] = "O";
                    break;
                default:
                    std::cout << "Invalid input\n";
                    break;
            };

        };

    };

    return 0;
};