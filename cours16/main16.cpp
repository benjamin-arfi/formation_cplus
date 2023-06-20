#include <iostream>
#include "window.hpp"

int main()
{
    Window app{};
    Window newapp{"mon nouveau programme",240,230};
    newapp.run();
    return 0;
}