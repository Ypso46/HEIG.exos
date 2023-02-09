#include <iostream>
#include "robot.h"

int main() {

    Robot r1(1);
    std::cout << r1.getPosition() << std::endl;

    r1.deplacer(4);
    std::cout << r1.getPosition() << std::endl;

    r1.demiTour();

    r1.deplacer(3);
    std::cout << r1.getPosition() << std::endl;

    return 0;
}