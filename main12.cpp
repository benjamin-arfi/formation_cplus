#include<iostream>

enum  class NaturalElement: int
{
    air,
    water,
    fire,
    earth
};

int main()
{
    NaturalElement re{NaturalElement::fire};
    std::cout<< static_cast<int>(re)<<std::endl;

    if (re == NaturalElement::fire)
    {
        std::cout<<"ouiii"<<std::endl;
    }
}
