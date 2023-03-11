#include <iostream>

unsigned int syracuse(unsigned int x, bool affichage);

int main() {

    unsigned int userInput = 0;
    std::cout << "Entrez un nombre entier entre 1 et 10'000 : " << std::endl;
    std::cin >> userInput;

    while (userInput < 1 || userInput > 10000 || std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Erreur, entrez un nombre entre 1 et 10'000 : " << std::endl;
        std::cin >> userInput;
    }

    for (unsigned int i = 1; i <= userInput; ++i) {
        std::cout << "Nombre d'itération pour n = " << i << " : " << syracuse(i, false) << std::endl;
    }

    return EXIT_SUCCESS;
}

//TODO refaire une fonction pour partie A, virer l'affichage part B
unsigned int syracuse(unsigned int x, bool affichage) {
    int count = 0;
    unsigned int temp = x;

    while (temp > 1) {
        if (temp % 2 == 0) {
            temp = temp / 2;
        } else {
            temp = temp * 3 + 1;
        }
        if (affichage) {
            std::cout << temp << std::endl;
        }
        count++;
    }
    return count;
}
