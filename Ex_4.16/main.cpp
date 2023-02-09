#include <iostream>

void syracuseA(int x);
void syracuseB(int x);

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

    //Part A
    //syracuseA(29);

    //Part B
    syracuseB(10);


    return 0;
}

void syracuseA(int x) {

    std::cout << "Suite de Syracuse pour n = " << x << std::endl;
    while (x != 1) {
        if (x % 2 == 0) {
            x /= 2;
            ++count;
        } else if (x % 2 != 0) {
            x *= 3;
            x += 1;
            ++count;
        }
        std::cout << x << std::endl;
    }
    std::cout << "Suite terminée en " << count << " itérations." << std::endl;
}
void syracuseB(int x) {
    while (x != 0) {
        if (x % 2 == 0) {
            x /= 2;
            ++count;
        } else if (x % 2 != 0) {
            x *= 3;
            x += 1;
            ++count;
        }
        std::cout << "Nombre d'itération pour n = " << count << " : " << std::endl;
    }
}