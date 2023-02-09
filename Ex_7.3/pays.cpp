#include "pays.h"

Pays::Pays(std::string nom, unsigned long nbHabitant, double superficie){
    m_nom = nom;
    m_nbHabitant = nbHabitant;
    m_superficie = superficie;
}

std::string Pays::getNom() {
    return m_nom;
}

unsigned long Pays::getNBHabitant() {
    return m_nbHabitant;
}

double Pays::getSuperficie() {
    return m_superficie;
}

