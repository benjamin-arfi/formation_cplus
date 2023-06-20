#include <iostream>
#include<string>
#include"quest.hpp"
#include"questStatus.hpp"

quest::quest(const std::string& name , const std::string& description, int id) noexcept: _name(name), _description(description)
{
    _status = questStatus::disabled;
}

void quest::show() const noexcept
{
    std::cout<<_name<<std::endl;
    std::cout<<_description<<std::endl;
}