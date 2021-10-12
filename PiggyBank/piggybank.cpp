#include <iostream>

int main() {
    double pesos, reais, soles, dollars;

    std::cout << "Enter number of Columbian Pesos: \n";
    std::cin >> pesos;

    std::cout << "Enter number of Brazillian Reais: \n";
    std::cin >> reais;

    std::cout << "Enter number of Peruvian Soles: \n";
    std::cin >> soles;

    //conversion from pesos to us (pesos * 0.05355)
    //conversion from reais to us (reais * 0,180606)
    //conversion from soles to us (soles * 0.245099)

    return 0;
}