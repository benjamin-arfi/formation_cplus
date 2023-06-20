#include <iostream>
#include<string>
#include"unit.hpp"
#include "personnage.hpp"
#include "quest.hpp"

int main()
{
    Unit p{123,"pore"};
    // std::cout<<p.getName()<<std::endl;
    // std::cout <<p.getId()<<std::endl;

    personnage prems{16 ,"Jason",1};
    // std::cout<<prems.getName()<<std::endl;
    // std::cout<<prems.getId()<<std::endl;
    // std::cout<<prems.getLevel()<<std::endl;

    quest q{"tourte aux sanglier", "Rapporte 5 morceaux", p.getId()};
    q.show();
    return 0;
}