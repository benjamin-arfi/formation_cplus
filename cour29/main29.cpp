#include <iostream>
#include <string>
#include<list>
#include "number.hpp"

int main()
{
    // std::list<int> l1{1,2,3,4,5};
    // for (const auto& element : l1)
    // {
    //     std::cout<<element<<std::endl;
    // }
    
    // std::list<std::string> l2{"asad","azx","arfre"};
    //  for (const auto& element : l2)
    // {
    //     std::cout<<element<<std::endl;
    // }

    // auto r1 = sum(3,5);
    // std::cout<<r1<<std::endl;

    // auto r2 = sum(2.4 , 4.70);
    // std::cout<< r2 << std::endl;

    DataContainer<int> dc1{25};
    std::cout << dc1.getData() << std::endl;

    DataContainer <std::string> dc2{"Hello"};
    std::cout << dc2.getData() << std::endl;

    return 0;

}