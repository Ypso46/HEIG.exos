#include <iostream>

int main() {
    int montant = 0;
    double tauxInteret = 0.;

    std::cout << "Entrez un montant et un taux d'intérêt : " << std::endl;
    std::cin >> montant >> tauxInteret;

    int montantDouble = montant * 2;
    double solde = montant + (tauxInteret / 100);
    double augmentationAnnuelle = tauxInteret / 100;

    int compteurAnnee = 0;

    while (solde < montantDouble) {
        solde += augmentationAnnuelle;
        compteurAnnee++;
    }

    std::cout << "Le montant a doublé après " << compteurAnnee << " années." << std::endl;

    return 0;
}