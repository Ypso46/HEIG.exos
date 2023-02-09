#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
    unsigned int meter = 0;
    std::cout << "Enter le nombre de mètres à convertir (entier > 0) : " << std::endl;
    std::cin >> meter;

    double feet = 3.28084;
    double inches = 39.370078;
    double mile = 0.00062;

    const int W = (int)log10(meter) + 8;

    std::cout << std::fixed;
    std::cout << std::setprecision(2);

    std::cout << meter << " [m] = " << (meter * mile) << " [mile]" << std::endl
        << std::setw(W) << "= "  << (meter * feet) << " [ft]" << std::endl
        << std::setw(W) << "= " << (meter * inches) << " [inch]" << std::endl;

    return 0;
}