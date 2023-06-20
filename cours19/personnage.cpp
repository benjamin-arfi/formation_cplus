#include <iostream>
#include <string>
#include "unit.hpp"
#include "personnage.hpp"

personnage::personnage(int id, const std::string& name,int level ) noexcept : Unit(id, name), _level(level)
{
}

int personnage::getLevel() const noexcept
{
    return _level;
}