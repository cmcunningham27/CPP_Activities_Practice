#include <iostream>
#include <cstdlib>
#include <time.h>

int main() {
    std::cout << "MAGIC 8-BALL: \n\n";

    // sets the seed of the random number generator
    srand(time(NULL));

    // by dividing the number by 10 and getting the remainder, we get values of 0-9 back
    int answer = std::rand() % 10;

    if (answer == 0) {
        std::cout << "It is certain\n";
    } else if (answer == 1) {
std::cout << "Sign point to yes\n";
    } else if (answer == 2) {
        std::cout << "Ask again later\n";
    } else if (answer == 3) {
        std::cout << "Don't count on it\n";
    } else if (answer == 4) {
        std::cout << "My reply is no\n";
    } else if (answer == 5) {
        std::cout << "Most likely\n";
    } else if (answer == 6) {
        std::cout << "As I see it, yes\n";
    } else if (answer == 7) {
        std::cout << "Better not tell you now\n";
    } else if (answer == 8) {
        std::cout << "Concentrate and ask again\n";
    } else {
        std::cout << "Very doubtful\n";
    };

    return 0;
}