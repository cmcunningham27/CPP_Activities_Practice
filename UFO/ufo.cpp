#include <iostream>
#include "ufo_functions.hpp"

int main() {

    greet();

    std::string codeword = "codecademy";
    std::string answer = "_ _ _ _ _ _ _ _ _ _";

    int misses = 0;

    std::vector<char> incorrect;
    bool guess = false;
    char letter;


    while (answer != codeword && misses < 7) {

        // outputs display for appropriate number of misses
        display_misses(misses);

        display_status(incorrect, answer);

        std::cout << "\nPlease enter your guess: \n";
        std::cin >> letter;

        // iterate through codeword to check if user's guess matches any character in codeword
        for (int i = 0; i < codeword.length(); i++) {

            if (letter == codeword[i]) {
                // assign answer's index with the correctly guessed letter
                answer[i] = letter;
                guess = true;

            };

        };

        if (guess) {

            std::cout << "Correct!\n";

        } else {

            std::cout << "Incorrect! The tractor beam pulls the person in further.\n";
            incorrect.push_back(letter);
            misses++;

        };

        

    };

    end_game(answer, codeword);

}