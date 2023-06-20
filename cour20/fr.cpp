#include <iostream>
#include <string>
#include "fr.hpp"

void Francais::sayGoodNight() const noexcept 
{
    std::cout<<_name<<" : bonne nuit "<<std::endl;
}