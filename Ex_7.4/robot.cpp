#include "robot.h"

Robot::Robot(int x) {
    m_position = x;
}

void Robot::deplacer(int x) {
    m_position += x * m_mouvement;
}

int Robot::getPosition() {
    return m_position;
}

void Robot::demiTour() {
    m_mouvement *= - 1;
}