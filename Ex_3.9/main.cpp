#include <iostream>

int main() {

    int firstNumber = 0, secondNumber = 0, thirdNumber = 0;
    std::cout << "Entrez trois nombres entiers : " << std::endl;
    std::cin >> firstNumber >> secondNumber >> thirdNumber;

    int minNumber = firstNumber;

    if (secondNumber < minNumber) {
        minNumber = secondNumber;
    } else if (thirdNumber < minNumber) {
        minNumber = thirdNumber;
    } 

    std::cout << "Le plus petit nombre est : " << minNumber << std::endl;
    
    return 0;
}