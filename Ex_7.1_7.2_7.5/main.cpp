#include "pointOne.h"
#include "pointTwo.h"
#include <iostream>

int main() {

    PointOne p1(1, 2);

    p1.afficher();
    p1.deplacer(2, 4);
    p1.afficher();

    PointOne p2;
    p1.afficher();


    PointTwo newPoint(4, 8);
    PointTwo p4( 1, 2);
    std::cout << newPoint.abscisse() << " " <<  newPoint.ordonnee() << std::endl;

    newPoint.addition(p4);




    return 0;
}