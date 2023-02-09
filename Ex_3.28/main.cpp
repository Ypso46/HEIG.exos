#include <iostream>

int main() {
    double userInput = 0;
    std::cout << "Combien de termes voulez-vous additionner : " << std::endl;
    std::cin >> userInput;

    while (userInput == 0 || userInput < 0) {
        std::cout << "Erreur, veuillez entrer un nombre positif : " << std::endl;
        std::cin >> userInput;
    }

    double result = 0;

    for (int i = 1; i <= userInput; ++i) {
        result = result + (double)(1.0 / i);
    }

    std::cout << "La somme des " << userInput << " premiers termes de la série vaut : " << result << std::endl;

    return 0;
}