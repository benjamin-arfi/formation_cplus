#include <iostream>
#include <string>
/*
    std::string
    std::string_view
    size()  push_back(), pop_back()
    copy()
    clear()
    empty()
    front(), back(),append() .lenght
    starts_width() , end_width(), contains()
    substr() enlevez le nombre de caractere 
    swap() inversez les valeurs
*/

int main()
{
    std::string s{"bonsoir tout le monde"};

    std::cout<< s << std::endl;
    s.append (4,'r');
    s.append("ooooo");
    std::cout << s <<std::endl;

    for (const auto& c:s)
        std::cout<<c<<std::endl;

    return 0;


}