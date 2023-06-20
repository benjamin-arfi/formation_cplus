#include <iostream>
#include "pit.hpp"

pit::pit()
{
    std::cout<<"Creation d'un point ."<< this<<std::endl;
}
// pit::pit(const pit& i)
// {
//     std::cout<<"Copie d'un point" << std::endl;
// }
pit::~pit()
{
    std::cout<<"destruction de l'objet"<<this<< std::endl;
}