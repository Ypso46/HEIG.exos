#include <iostream>
#include "pays.h"
#include <vector>

int main() {

    //TODO essayer de faire la partir 2 de l'exo
//    enum struct listePays {France = 1, Suisse, Allemagne, Espagne, Belgique, Italie};
//
//    std::vector<double> listeSuperficie = {10000.2, 20000.3, 30000.4, 40000.5, 50000.6, 60000.7};
//
//    std::vector<int> listenbHabitant = {5, 6, 7, 8, 9, 10};



    Pays no1("France", 2, 500);
    std::cout << no1.getNom() << std::endl;
    std::cout << no1.getNBHabitant() << std::endl;
    std::cout << no1. getSuperficie() << std::endl;


    Pays no2("Suisse", 4, 689);
    std::cout << no2.getNom() << std::endl;
    std::cout << no2.getNBHabitant() << std::endl;
    std::cout << no2. getSuperficie() << std::endl;

    return 0;
}