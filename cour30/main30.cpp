#include <iostream>
#include<string>
#include "time.hpp"

int main()
{
    ti::time t1{14,25,56};
    ti::time t2{3,12,2};
    std::cout << t2 <<std::endl;
    std::cout << t1 << std::endl;

    std::cout << t1 + t2<<std::endl;
    std::cout << 12 + t1<<std::endl;
    return 0;
}