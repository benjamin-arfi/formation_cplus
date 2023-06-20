#include <iostream>
#include <string>

int main()
{
    int number{500};

    if(number > 500)
    { 
        std:: cout << "vide " << std::endl;
    }
    else if (number> 400)
    {
        std::cout << "> 400" << std::endl;
    }
    else
    {
        std::cout << "inferieur a 500" << std::endl;
    }

    int code{0};

    std::cout << "Entrez un chiffre";
    std::cin >> code;

    switch (code)
    {
        case 1:
            std::cout<<"Vous avez saisi 1 "<< std::endl;
            break;
        case 2:
            std::cout<<"Vous avez saisi 2"<< std::endl;
            break;
        case 3:
            std::cout<<"Vous avez saisi 3"<< std::endl;
            break;
    }

    int nombre{15};
    std::string s{"Hello"};
    std::cout<<s<<std::endl;

    if (nombre == 15)
    {
        std::cout << nombre << std::endl;
        s= "Hello World ";
    }

    std::cout << s << std::endl;
    
    return 0;
}