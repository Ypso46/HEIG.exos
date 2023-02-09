#include <iostream>

std::string estBissextile(int annee);

int main() {

    int userInput = 0;
    std::cout << "Entrez une année afin de savoir si elle est bissextile : " << std::endl;
    std::cin >> userInput;

    std::cout << estBissextile(userInput) << std::endl;

    return 0;
}


std::string estBissextile(int annee) {
    if (annee % 4 == 0) {
        return "L'année est bissextile !";
    } else if (annee % 100 == 0) {
        return "L'année est bissextile ! ";
    } else if (annee % 400 == 0) {
        return "L'année est bissextile ! ";
    } else {
        return "L'année n'est pas bissextile !";
    }
}