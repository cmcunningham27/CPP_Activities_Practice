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

    

}