#include <iostream>
#include <cstdlib>

int main() {
    std::cout << "MAGIC 8-BALL: \n\n";

    // sets the seed of the random number generator
    srand(time(NULL));

    // by dividing the number by 10 and getting the remainder, we get values of 0-9 back
    int answer = std::rand() % 10;

    if (answer == 0) {

    } else if (answer == 1) {

    } else if (answer == 2) {

    } else if (answer == 3) {

    } else if (answer == 4) {

    } else if (answer == 5) {

    } else if (answer == 6) {

    } else if (answer == 7) {

    } else if (answer == 8) {

    } else {

    };
}