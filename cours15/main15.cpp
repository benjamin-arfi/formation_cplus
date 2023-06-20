#include <iostream>
#include "pit.hpp"

/*
    struct: donnees publique (par defaut)
    class: donnes privees (par defaut)

    Niveaux d'acces : public private protected
*/

struct Point
{
    int x;
    int y;
};



int main()
{
    Point p{145,38};

    std::cout<< "(" <<p.x<<","<<p.y<<")"<<std::endl;
    p.x = 64;
    std::cout<< "(" <<p.x<<","<<p.y<<")"<<std::endl;

    pit i{};
    pit i2{};
    return 0;
}

