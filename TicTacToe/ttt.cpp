#include <iostream>
#include <vector>
#include "ttt_functions.hpp"

int main() {

    // assign a vector with 9 positions starting with strings with spaces
    std::vector<std::string> board = {" ", " ", " ", " ", " ", " ", " ", " ", " "};
    // first turn
    int turns = 1;
    // position on board
    int spot;
    // boolean for when player wins, start with neither player won
    bool win1 = false, win2 = false;
    // string for which player won
    std::string player;

    // while turns is less than 10
    while (turns < 10) {

        // displays current board each turn
        display_game(board);

        // determine whose turn it is, starts with Player 1 first (x's)
        if (turns % 2 == 1) {

            std::cout << "Player 1's turn!\n";
            std::cout << "Pick a position from 1-9 that's not already taken.\n";
            
            // player 1's input
            std::cin >> spot;

            // change position to X
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

            // check if player 1 has won
            win1 = check_win(board, win1, win2);

            // if player 1 won end game
            if (win1) {
                
            };


        } else {

            std::cout << "Player 2's turn!\n";
            std::cout << "Pick a position from 1-9 that's not already taken.\n";

            // player 2's input
            std::cin >> spot;

            // change position to O
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

            // check if player 2 has won
            win2 = check_win(board, win1, win2);

            // if player 2 won end game
            if (win2) {

            };

        };

        // increment turns by 1 after each players turn
        turns++;

    };

    return 0;
};