#include <iostream>

void Swap(double &a, double &b, double &c);

int main() {

    double premier = 1.;
    double deuxieme = 2.;
    double troisieme = 3.;

    Swap(premier, deuxieme, troisieme);

    std::cout << premier << std::endl;
    std::cout << deuxieme << std::endl;
    std::cout << troisieme << std::endl;


    return 0;
}

void Swap(double &a, double &b, double &c) {
    double temp = c;
    c = b;
    b = a;
    a = temp;
}
