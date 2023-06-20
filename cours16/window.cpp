#include <iostream>
#include <string>
#include "window.hpp"

// Window::Window(std::string title)
// {
//     std::cout<<"fenetre : "<< title<<std::endl;
// };
Window::Window(std::string t, int w ,int h) :title(t),width(w),height(h) 
{

}
void Window::run() const noexcept
{
    std::cout<<"affichage en ligne"<< std::endl;
}