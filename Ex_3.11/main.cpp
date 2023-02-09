#include <iostream>

int main() {

    int userInput = 0;
    std::cout << "Entrez un nombre entier : " << std::endl;
    std::cin >> userInput;

    if (userInput % 5 == 0 && userInput % 3 == 0) {
        std::cout << userInput << " est un multiple de 3 et de 5." << std::endl;
    } else if (userInput % 5 == 0) { 
        std::cout << userInput << " est un multiple de 5." << std::endl;
    } else if (userInput % 3 == 0) {
        std::cout << userInput << " est un multiple de 3." << std::endl;
    } else {
        std::cout << userInput << " n'est ni un multiple de 3 ni un multiple de 5." << std::endl;
    }

    return 0;
}