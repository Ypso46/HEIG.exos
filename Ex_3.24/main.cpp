#include <iostream>
#include <cmath>
#include <iomanip>

int main() {

    double coefRebond = 0.;
    double hauteur0 = 0;
    int nbRebond = 0;

    std::cout << "Entrez le coefficient de rebond (entre 0 non compris et 1) : " << std::endl;
    std::cin >> coefRebond;

    while (coefRebond <= 0 || coefRebond > 1)
    {
        std::cout << "Erreur ! Entrez un chiffre entre 0 non compris et 1 : " << std::endl;
        std::cin >> coefRebond;
    }


    std::cout << "Entrez la hauteur initiale :" << std::endl;
    std::cin >> hauteur0;

    while (hauteur0 <= 0) {
        std::cout << "Erreur ! Entrez une hauteur supérieur à zéro : " << std::endl;
        std::cin >> hauteur0;
    }


    std::cout << "Entrez le nombre de rebond :" << std::endl;
    std::cin >> nbRebond;

    while (nbRebond <= 0) {
        std::cout << "Erreur ! Entrez un nombre supérieur à zéro :" << std::endl;
        std::cin >> nbRebond;
    }

    const double G = 9.81;

    for (int i = 1; i <= nbRebond; ++i) {
        double vitesse0 = sqrt(2 * G * hauteur0);
        double vitesse1 = coefRebond * vitesse0;
        double hauteur1 = (vitesse1 * vitesse1) / (2 * G);
        hauteur0 = hauteur1;
    }

    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    std::cout << "La hauteur atteinte après " << nbRebond << " rebond" << (nbRebond > 1 ? "s = " : " = ") << hauteur0 << " [m]." << std::endl;

    return 0;
}