#include<iostream>
#include <string>
#include "window1.hpp"

window1::window1(std::string t): title(t)
{

}
std::string window1::getTitle() const
{
    return this ->title;
}
void window1::set_title(std::string title)
{
    if (title.length() > 200)
        throw new std::invalid_argument("Le nom de la fenetre doit comporter 20 caractere max .");
    this-> title = title;
}