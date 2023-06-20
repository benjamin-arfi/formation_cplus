#include <iostream>
#include <string>
/*
    std::cin -> std::cin.good(), std::cin.fail(), std::cin.bad()
    std::cin.ignore()
    std::getline()
    std::ws
*/

int main()
{
    std::cout << "Tapez un nombre entier : ";

    int number;
    std::cin >> number;

    std::string username;
    std::getline(std::cin,username);
    //std::cin.ignore(255,/n)

    std::cout << "Tapez votre nom complet :";
    std::getline(std::cin,username );

    std::cout<< "Nombre saisi :" << number << std::endl;
    std::cout<<"Vous vous appelez "<<username<< std::endl;
    
    return 0;
}