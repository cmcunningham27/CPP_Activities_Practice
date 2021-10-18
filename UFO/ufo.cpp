#include <iostream>
#include "ufo_functions.hpp"

int main() {

    greet();

    std::string codeword = "codecademy";
    std::string answer = "_ _ _ _ _ _ _ _ _ _";

    int misses = 0;

    while (answer != codeword && misses < 7) {

        misses++;

    };

    end_game(answer, codeword);

}