#include <iostream>

bool operation(double x, double y, char c);

int main() {

    double one = 0.;
    double two = 0.;
    char userSign;

    std::cout << "Enter two numbers and an operation sign:" << std::endl;
    std::cin >> one >> two >> userSign;


    while (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Error, please enter two numbers and an operation sign: " << std::endl;
        std::cout << "Number one: " << std::endl;
        std::cin >> one;
        std::cout << "Number two: " << std::endl;
        std::cin >> one;
        std::cout << "The sign: " << std::endl;
        std::cin >> userSign;
    }

    std::cout << operation(one, two, userSign) << std::endl;

    return 0;
}

bool operation(double x, double y, char c) {
    std::string sign;
    double result = 0.;

    switch (c) {
        case '+': sign = "plus";
            break;
        case '-' : sign = "minus";
            break;
        case '*': sign = "multiply";
            break;
        case '/': sign = "divide";
            break;
        default: std::cout << "The sign you entered is incorrect !" << std::endl;
            break;
    }

    if (sign == "plus") {
        result = x + y;
        std::cout << result << std::endl;
    } else if (sign == "minus") {
        result = x - y;
        std::cout << result << std::endl;
    } else if (sign == "multiply") {
        result = x * y;
        std::cout << result << std::endl;
    } else if (sign == "divide") {
        result = x / y;
        std::cout << result << std::endl;
    } else {
        return false;
    }

    return true;
}
