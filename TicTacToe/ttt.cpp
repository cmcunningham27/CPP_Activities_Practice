#include <iostream>
#include <vector>
#include "ttt_functions.hpp"

int main() {

    // assign a vector with 9 positions starting with strings with spaces
    std::vector<std::string> board = {" ", " ", " ", " ", " ", " ", " ", " ", " "};

    int turns = 1;

    while (turns < 10) {

        display_game(board);

        // determine whose turn it is, starts with Player 1 first (x's)
        if (turns % 2 == 1) {



        } else {



        };

    };

    return 0;
};