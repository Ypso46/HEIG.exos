#include <iostream>
#include <iomanip>

int main() {
    double note1 = 0, note2 = 0, note3 = 0, note4 = 0;
    std::cout << "Saisisssez quatre notes : " << std::endl;
    std::cin >> note1 >> note2 >> note3 >> note4;

    double moyenne = (note1 + note2 + note3 + note4) / 4;
    std::string appreciation = "";

    if (moyenne > 5.5) {
        appreciation = "Excellent"; 
    } else if (moyenne > 5.) {
        appreciation = "Très bien";
    } else if (moyenne > 4.5) {
        appreciation = "Bien";
    } else if (moyenne >= 4.) {
        appreciation = "Moyen";
    } else {
        appreciation = "Insuffisant";
    }

    std::cout << std::fixed;
    std::cout << std::setprecision(1);
    std::cout << "Moyenne = " << moyenne << " - " << appreciation << std::endl;

    return 0;
}