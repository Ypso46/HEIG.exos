#include <iostream>
#include <iomanip>
#include <cmath>

int main() {

    double rayon1 = 0.;
    double rayon2 = 0.;
    double hauteur1 = 0.;
    double hauteur2 = 0.;
    double hauteur3 = 0.;

    std::cout << "Entrer les nombres suivants : rayon 1, rayon 2, hauteur 1, 2 et 3." << std::endl;
    std::cin >> rayon1 >> rayon2 >> hauteur1 >> hauteur2 >> hauteur3;

    double pi = 3.14;

    double volumeCylindreHaut = pi * pow(rayon2, 2) * hauteur2;
    double volumeCylindreBas = pi * pow(rayon1, 2) * hauteur1;
    double volumeCone = pi * (hauteur3 / 3) * (pow(rayon1, 2) + pow(rayon2, 2) + (rayon1 * rayon2)); 

    double volumeTotal = volumeCone + volumeCylindreBas + volumeCylindreHaut;

    std::cout << std::fixed;
    std::cout << std::setprecision(1);
    std::cout << "Le volume total est : " << volumeTotal << std::endl;

    return 0;
}