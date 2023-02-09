#ifndef EX_7_3_PAYS_H
#define EX_7_3_PAYS_H
#include <string>


class Pays {
public:
    Pays(std::string nom, unsigned long nbHabitant, double superficie);
    std::string getNom();
    unsigned long getNBHabitant();
    double getSuperficie();
private:
    std::string m_nom;
    unsigned long m_nbHabitant;
    double m_superficie;
};

#endif