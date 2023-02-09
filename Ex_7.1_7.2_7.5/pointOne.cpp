#include <iostream>
#include "pointOne.h"

PointOne::PointOne() {
    m_x = 1;
    m_y = 1;
}

// inline version of the lines above
// Point::Point() : m_x(1), m_y(1) {}

PointOne::PointOne(float x, float y) {
    m_x = x;
    m_y = y;
}

void PointOne::afficher()const {
    std::cout << m_x << " " << m_y << std::endl;
}

void PointOne::deplacer(float newX, float newY) {
    PointOne::m_x = m_x + newX;
    PointOne::m_y = m_y + newY;
}



