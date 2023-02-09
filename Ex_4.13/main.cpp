#include <iostream>

void afficher();

int main() {

    afficher();
    afficher();
    afficher();

    return 0;
}

void afficher() {
    static int count = 1;
    std::cout << "Appel numéro " << count << std::endl;
    count++;

}
