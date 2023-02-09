#include <iostream>
#include <iomanip>

int main() {

    int userInput = 0;

    std::cout << "Entrez une valeur entre 3 et 30 : " << std::endl;
    std::cin >> userInput;

    while (userInput < 3 || userInput > 30) {
        std::cout << "Erreur, veuillez entrer un nombre entre 3 et 30 : " << std::endl;
        std::cin >> userInput;
    }

    for (int noLigne = 1; noLigne <= userInput; ++noLigne) {
        for (int i = 1; i <= userInput - noLigne; ++i)
            std::cout << " ";
         for (int i = 1; i <= 2 * noLigne  - 1; ++i)
            std::cout << "*";
         std::cout << std::endl;
        }
    std::cout << std::endl;

    return 0;
}