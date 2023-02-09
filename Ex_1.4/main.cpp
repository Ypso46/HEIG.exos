#include <iostream>
#include <string>

int main()
{
    std::string name = "";
    std::cout << "What is your name?" << std::endl;
    std::cin >> name;

    int age = 0;
    std::cout << "How old are you?" << std::endl;
    std::cin >> age;

    int year = 2023 - age;

    std::cout << "Bonjour " << name << std::endl;
    std::cout << "Vous avez " << age << " ans et vous êtes né(e) en " << year << "." << std::endl;

}