#include <iostream>

void remplir(double tab[], int val, unsigned int taille);
void copier(const double tabIn[], double tabOut[], unsigned int taille);
void retournerSomme(const double tab[], unsigned int taille);
void retournerMoyenne(const double tab[], unsigned int taille);
void retournerMin(const double tab[], unsigned int taille);


int main() {
    const int CAPA = 10;
    double tableau1[CAPA];
    double tableau2[CAPA];
    double tableau3[CAPA] = {1, 2, 3, 4, 5, 6, 7};


    remplir(tableau1, 2, 6);
    copier(tableau1, tableau2, 6);
    retournerSomme(tableau3, 7);
    retournerMoyenne(tableau3, 7);
    retournerMin(tableau3, 7);


    return 0;
}

void remplir(double tab[], int val, unsigned int taille) {
    for (unsigned int i = 0; i < taille; ++i) {
        tab[i] = val;
        std::cout << tab[i];
    }
    std::cout << std::endl;
}


void copier(const double tabIn[], double tabOut[], unsigned int taille) {
    std::cout << "Tab2 : ";

    for (unsigned int i = 0; i < taille; ++i) {
        tabOut[i] = tabIn[i];
        std::cout << tabOut[i];
    }
    std::cout << std::endl;
}

void retournerSomme(const double tab[], unsigned int taille) {
    double somme = 0;
    for(unsigned int i = 0; i < taille; ++i) {
        somme += tab[i];
    }
    std::cout << "La somme des chiffres du tableau est : " << somme << std::endl;
}

void retournerMoyenne(const double tab[], unsigned int taille) {
    double somme = 0;
    for(unsigned int i = 0; i < taille; ++i) {
        somme += tab[i];
    }
    double moyenne = somme / taille;
    std::cout << "La moyenne des chiffres du tableau est : " << moyenne << std::endl;
}

void retournerMin(const double tab[], unsigned int taille) {
    double min = tab[0];
    for(unsigned int i = 0; i < taille; ++i) {
        if (tab[i] < min) {
            min = tab[i];
        }
    }
    std::cout << "La valeur minimum est : " << min << std::endl;
}



