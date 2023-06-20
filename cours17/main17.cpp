#include <iostream>
#include <string>
#include "window1.hpp"

int main()
{
    window1 app{"Mon application graphique"};
    std::cout<<app.getTitle()<<std::endl;

    app.set_title("ma nouvelle application ");
    std::cout<<app.getTitle()<<std::endl;
    return 0;
}