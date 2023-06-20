#include <iostream>
#include <string>

int main()
{
    std::string sentence{"Hello world ,how are you?"};
    int i{0};

    while(i < 10)
    {
        i ++;
        if (i ==4 || i == 5 || i ==6)
            continue;
        std::cout << "i vaut" << i << std::endl;
        
    }

    for (auto i{0}; i < 10 ; i++)
    {
        std::cout << "i vaut" << i <<std::endl;
    }
    for(const auto letter:sentence)
    {
        std::cout <<letter<< "\n";
    }


    return 0 ;
}