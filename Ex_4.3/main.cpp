#include <iostream>
#include "VolumePyramide.h"

int main() {

    std::cout << std::fixed;
    std::cout.precision(1);

    double v1 = volume(10, 3.5, 12);
    std::cout << v1 << std::endl;

    double v2 = volume(3.6, 2.4, 2.7);
    std::cout << v2 << std::endl;


    return 0;
}