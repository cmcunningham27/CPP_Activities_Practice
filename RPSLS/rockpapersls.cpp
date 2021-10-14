/* Rock, Paper, Scissors, Lizard, Spock Game
Scissors cuts Paper,
Paper covers Rock,
Rock crushes Lizard,
Lizard poisons Spock,
Spock smashes Scissors,
Scissors decapitate Lizard,
Lizard eats Paper,
Paper disproves Spock,
Spock vaporizes Rock,
(and as it always has) Rock crushes Scissors */

#include <iostream>
#include <stdlib.h>
#include <time.h>

int main() {

    srand (time(NULL));

    // creates random number for the computer from 1-5 by adding 1 to 0-4
    int computer = rand() % 5 + 1;

    int user = 0;

    std::cout << "=================================\n";
    std::cout << "rock paper scissors lizard spock!\n";
    std::cout << "=================================\n";

    std::cout << "1) Rock\n";
    std::cout << "2) Paper\n";
    std::cout << "3) Scissors\n";
    std::cout << "4) Lizard\n";
    std::cout << "5) Spock\n";

    std::cout << "shoot!\n";

    std::cin >> user;

    if (user == computer) {
        std::cout << "It was a tie!\n";
    };

    if (user == 1) {
        std::cout << "You chose Rock!\n";
        
        if (computer == 2) {
            
            std::cout << "Computer chose Paper!\n";
            std::cout << "Computer wins!\n";

        } else if (computer == 3) {
            
            std::cout << "Computer chose Scissors!\n";
            std::cout << "You win!\n";
        
        } else if (computer == 4) {

            std::cout << "Computer chose Lizard!\n";
            std::cout << "You win!\n";        

        } else {

            std::cout << "Computer chose Spock!\n";
            std::cout << "Computer wins!\n";

        }; 
    }

    if (user == 2) {
        std::cout << "You chose Paper!\n";

        if (computer == 1) {

            std::cout << "Computer chose Rock!\n";
            std::cout << "You win!\n";

        } else if (computer == 3) {

            std::cout << "Computer chose Scissors!\n";
            std::cout << "Computer wins!\n";

        } else if (computer == 4) {

            std::cout << "Computer chose Lizard!\n";
            std::cout << "Computer wins!\n";

        } else {

            std::cout << "Computer chose Spock!\n";
            std::cout << "You win!\n";

        };
    };

    if (user == 3) {
        std::cout << "You chose Scissors!\n";

        if (computer == 1) {

            std::cout << "Computer chose Rock!\n";
            std::cout << "Computer wins!\n";

        } else if (computer == 2) {

            std::cout << "Computer chose Paper!\n";
            std::cout << "You win!\n";

        } else if (computer == 4) {

            std::cout << "Computer chose Lizard!\n";
            std::cout << "You win!\n";

        } else {

            std::cout << "Computer chose Spock!\n";
            std::cout << "Computer wins!\n";

        };
    };

    if (user == 4) {
        std::cout << "You chose Lizard!\n";

        if (computer == 1) {

            std::cout << "Computer chose Rock!\n";
            std::cout << "Computer wins!\n";

        } else if (computer == 2) {

            std::cout << "Computer chose Paper!\n";
            std::cout << "You win!\n";

        } else if (computer == 3) {

            std::cout << "Computer chose Scissors!\n";
            std::cout << "Computer wins!\n";

        } else {

            std::cout << "Computer chose Spock!\n";
            std::cout << "You win!\n";

        };
    };

    if (user == 5) {
        std::cout << "You chose Spock!\n";

        if (computer == 1) {

            std::cout << "Computer chose Rock!\n";
            std::cout << "You win!\n";

        } else if (computer == 2) {

            std::cout << "Computer chose Paper!\n";
            std::cout << "Computer wins!\n";

        } else if (computer == 3) {

            std::cout << "Computer chose Scissors!\n";
            std::cout << "You win!\n";

        } else {

            std::cout << "Computer chose Lizard!\n";
            std::cout << "Computer wins!\n";

        };
    };



}