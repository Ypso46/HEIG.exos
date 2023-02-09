#include <iostream>

int main() {
    int userInput1 = 0;
    int userInput2 = 0;

    std::cout << "Entrez deux nombres supérieurs à zéro : " << std::endl;
    std::cin >> userInput1 >> userInput2;

    while (userInput1 < 0 || userInput1 == 0 || userInput2 < 0 || userInput2 == 0) {
        std::cout << "Erreur, entrez deux nombres supérieurs à zéro : " << std::endl;
        std::cin >> userInput1 >> userInput2;
    }

    int max = (userInput1 > userInput2 ? userInput1 : userInput2);

    do {
        if (max % userInput1 == 0 && max % userInput2 == 0) {
            std::cout << "Le plus petit multiple commun est : " <<  max << std::endl;
            break;
        } else {
            max++;
        }
    } while (true);

    std::cout << max << std::endl;

    return 0;
}