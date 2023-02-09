#include "pointTwo.h"
#include <iostream>

PointTwo::PointTwo() : m_x(1), m_y(1) {}

PointTwo::PointTwo(int x, int y) {
    m_x = x;
    m_y = y;
}

int PointTwo::abscisse() const {
    return m_x;
}

int PointTwo::ordonnee() const {
    return m_y;
}

PointTwo PointTwo::addition(PointTwo p4) {
    PointTwo EPFL(abscisse() + p4.abscisse(), ordonnee() + p4.ordonnee());
    return EPFL;
}


