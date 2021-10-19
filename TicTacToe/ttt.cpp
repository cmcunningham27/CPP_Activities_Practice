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
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 9:
            };


        } else {

            std::cout << "Player 2's turn!\n";
            std::cout << "Pick a position from 1-9 that's not already taken.\n";

            std::cin >> spot;

            switch (spot) {
                case 1:
                case 2:
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 9:
            };

        };

    };

    return 0;
};