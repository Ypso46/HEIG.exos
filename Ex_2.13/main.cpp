#include <iostream>
#include <cmath>
#include <iomanip>

int main() {

    unsigned int userInput = 0;
    std::cout << "Entrez un nombre entier > 0 : " << std::endl;
    std::cin >> userInput;

    int numberOfDigits = (int)log10(userInput) + 1;
    int firstDigit = (int)(userInput / pow(10, numberOfDigits - 1)); 
    int lastDigit = (userInput % 10);

    std::cout
         << "Nombre saisi       : " << userInput << std::endl
         << "Nombre de chiffres : " << numberOfDigits << std::endl
         << "Premier chiffre    : " << firstDigit << std::endl
         << "Dernier chiffre    : " << lastDigit << std::endl;
         
    return 0;
}