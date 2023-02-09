#include <iostream>

int main() {

    int mois = 0;
    std::cout << "Entrez un nombre pour un mois (ex : janvier = 1, février = 2, etc.)" << std::endl;
    std::cin >> mois;

    enum struct moisLettre {JANVIER = 1, FEVRIER, MARS, AVRIL, MAI, JUIN, JUILLET, AOUT, SEPTEMBRE, OCTOBRE, NOVEMBRE, DECEMBRE};

    int joursMois = 0;

    switch (mois)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8: 
        case 10:
        case 12:
            joursMois = 31;
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            joursMois = 30;
            break;
        case 2:
            joursMois = 28;
            break;
        default:
            break;
    }

    std::cout << "Ce mois comporte : " << joursMois << " jours" << std::endl;

    return 0;
}