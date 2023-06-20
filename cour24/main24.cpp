#include <iostream>
#include <string>
#include <list>

/*
    front(), back()
    size(),empty()
    push_front(), push_back(), insert()
    pop_front(), pop_back(), clear()
    sort(), reverse()
*/
int main()
{
    std::list<std::string> li{"arbre", "bateau"};
    for (const auto& element :li)
        std::cout<<element << std::endl;
    li.push_back("castor");
    li.push_front("barrage");
     for (const auto& element :li)
        std::cout<<element << std::endl;
    
    
    return 0;
    
}