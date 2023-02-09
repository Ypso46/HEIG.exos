#include <iostream>

void retraitCompte(int &solde, int retrait);

int main() {

    int soldeActuel = 0;
    int retraitActuel = 0;

    std::cout << "Entrez le solde actuel : " << std::endl;
    std::cin >> soldeActuel;

    while (soldeActuel > 0) {
        std::cout << "Entrez le montant de votre retrait : " << std::endl;
        std::cin >> retraitActuel;

        retraitCompte(soldeActuel, retraitActuel);
    }

    return 0;
}

void retraitCompte(int &solde, int retrait) {
    while (solde <= 0 || retrait <= 0) {
        std::cout << "Erreur, entrez deux montants positifs : " << std::endl;
        std::cin >> solde >> retrait;
    }

    if (solde <= retrait) {
        std::cout << "Votre solde est insuffisant, votre retrait s'élève donc à : " << retrait - (retrait - solde) << std::endl;
        solde = 0;
    } else if (solde >= retrait) {
        solde -= retrait;
        std::cout << "Votre solde après retrait est : " << solde << std::endl;
    } else {
        std::cout << "Quelque chose d'inattendu a dû se produire, veuillez contacter Stan ! " << std::endl;
    }
}
