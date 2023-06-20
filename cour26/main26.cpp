#include <iostream>
#include <string>
#include <unordered_set>
#include <set>

/*
    insert(),erase(), clear()
    size(),empty()
    find(), contains()(sa marche comme mm )
*/

int main()
{
    std::set<int> s{1,5,9,0,17};

    s.insert ({4,7,3});
    s.erase(1);

    for(const auto& element : s)
        std::cout<<element<<std::endl;
    if (s.find(5) != std::end(s))
        std::cout<<"trouve"<<std::endl;
    if(s.contains(9))
        std::cout<<"ahhh"<<std::endl;
    return 0;
}