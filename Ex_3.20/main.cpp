#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

int main() {

const unsigned NB_COLONNES = 3;
const unsigned N_DEPART = 20;
const unsigned N_FIN = 1;
const unsigned W = (unsigned) log10(N_DEPART) + 1;

for (unsigned n = N_DEPART, noColonne = 1; n >= N_FIN ; ++noColonne, --n) {
    std::cout << std::setw(W) << n;
    if (noColonne == NB_COLONNES) {
        std::cout << std::endl;
        noColonne = 0;
    } else {
        if (n != N_FIN) {
            std::cout << " ";
        }
    }
}

    return 0;
}
