#include <iostream>
#include <cmath>

int main() {
    double a, b, c;

    std::cout << "Enter a: ";
    std::cin >> a;

    std::cout << "Enter b: ";
    std::cin >> b;

    std::cout << "Enter c: ";
    std::cin >> c;

    double root1, root2;

    // finds the first root (value of x) using '+'
    root1 = (-b + std::sqrt(b*b - 4*a*c)) / (2*a);

    // finds the second root (value of x) using '-'
    root2 = (-b - std::sqrt(b*b - 4*a*c)) / (2*a);

    std::cout << "Root 1 is " << root1 << "\n";
    std::cout << "Root 2 is " << root2 << "\n";

    return 0;
}