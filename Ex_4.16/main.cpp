#include <iostream>

unsigned int syracuse(unsigned int x, bool affichage);

static int count = 0;

int main() {

    int userInput = 0;
    std::cout << "Entrez un nombre entier entre 1 et 10'000 : " << std::endl;
    std::cin >> userInput;

    while (userInput < 1 || userInput > 10000 || std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Erreur, entrez un nombre entre 1 et 10'000 : " << std::endl;
        std::cin >> userInput;
    }

    syracuse(userInput, false);

    return EXIT_SUCCESS;
}

unsigned int syracuse(unsigned int x, bool affichage) {

    std::cout << "Suite de Syracuse pour n = " << x << std::endl;
    unsigned int temp = x;
    while (x > 1) {
        if (x % 2 == 0) {
            x /= 2;
        } else {
            x = x * 3 + 1;
        }
        ++count;
        if (affichage) {
            std::cout << temp << std::endl;
        }
    }

}
