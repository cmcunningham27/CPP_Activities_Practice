#include <iostream>

// int main() {
//     int dogyears = 21;

//     int age;

//     std::cout << "Type your dog's age: ";
//     std::cin >> age;

//     age = age - 2;

//     dogyears = dogyears + (age * 4);

//     std::cout << dogyears;

//     return 0;
// }

//OR

int main() {
    int dog_age = 6;

    int early_years, later_years, human_years;

    // The first two years of a dog's life count as 21 human years
    early_years = 21;

    // Each year following age 2, counts as 4 human years for a dog's life
    later_years = (dog_age - 2) * 4;

    // combine the early_years and later_years to get dog's total age in human years
    human_years = early_years + later_years;

    std::cout << "My name is Zeus! Ruff ruff, I am " << human_years << " years old in human years!\n";

    return 0;
}