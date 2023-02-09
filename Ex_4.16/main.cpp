#include <iostream>

void syracuse(int x, int& c);

static int count = 1;


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

    for (int i = 1; i <= userInput; ++i) {
        syracuse(i, count);
    }
    std::cout << "Le nombre d'itérations nécessaires pour arriver à 1 est de " << count << std::endl;

    return 0;
}

void syracuse(int x, int& c) {
    while (x != 1) {
        if (x % 2 == 0) {
            x /= 2;
            c++;
        } else if (x % 2 != 0) {
            x *= 3;
            x += 1;
            c++;
        }
    }
}