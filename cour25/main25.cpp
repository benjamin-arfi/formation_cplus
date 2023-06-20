#include <iostream>
#include <string>
#include <unordered_map>
#include <map>
/*
    insert() / erase()
    empty()/ size()
    contains()
*/
int main()
{
    std::unordered_map<int,std::string> um{{3,"arbre"},{1,"Maison"},{2,"Baseball"}};
    std::cout<< um[1] << std::endl;

    um[1] = "Villa";
    um[6] = "Ballon";

    std::cout<< um[1]<< std::endl;

    for(const auto& [key,value]:um)
        std::cout<<key<<" : "<<value<< std::endl;
    if (um.bucket_size(1))
        std::cout<<"oui"<< std::endl;
    else
        std::cout<<"Non" <<std::endl;
    return 0;
}