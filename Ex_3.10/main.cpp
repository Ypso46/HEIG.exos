#include <iostream>

int main() {
    int firstNumber = 0, secondNumber = 0, thirdNumber = 0;
    std::cout << "Entrez trois nombres entiers : " << std::endl;
    std::cin >> firstNumber >> secondNumber >> thirdNumber;

    int minNumberOne = 0;
    int minNumberTwo = 0;
    int minNumberThree = 0;
    int temp = 0;

    if (firstNumber < secondNumber) {
        minNumberOne = firstNumber;
        minNumberTwo = secondNumber;
    } else {
        minNumberOne = secondNumber;
        minNumberTwo = firstNumber;
    } 

    if (thirdNumber < minNumberOne) {
        temp = minNumberOne;
        minNumberOne = thirdNumber;
        minNumberThree = minNumberTwo;
        minNumberTwo = temp;
    } else if (thirdNumber < minNumberTwo) {
        temp = minNumberTwo;
        minNumberTwo = thirdNumber;
        minNumberThree = temp;
    } else {
        minNumberThree = thirdNumber;
    }

    std::cout << "Nombre le plus petit : " << minNumberOne << std::endl
        << "Nombre du milieu : " << minNumberTwo << std::endl
        << "Nombre le plus grand : " << minNumberThree << std::endl;

    return 0;
}