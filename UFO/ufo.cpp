#include <iostream>
#include "ufo_functions.hpp"

int main() {

    greet();

    std::string codeword = "codecademy";
    std::string answer = "_ _ _ _ _ _ _ _ _ _";

    int misses = 0;

    std::vector<char> incorrect;
    bool guess = false;


    while (answer != codeword && misses < 7) {

        // outputs display for appropriate number of misses
        display_misses(misses);

        display_status(incorrect, answer);

        misses++;

    };

    end_game(answer, codeword);

}