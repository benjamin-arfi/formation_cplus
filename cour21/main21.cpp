#include <iostream>
#include <string>
#include <array>
#include <vector>
/*
    std::aray : fill()

    std::vector : push_back(), pop_back()
    at():acces mais pas trp utilise
    size()
    copy()
    clear()
    empty()
    front(), back()
*/

int main()
{
    std::array<int ,5> arr{1,2,3,4,5};
    for (const auto& element : arr)
        std::cout<< element<< std::endl;

    std::cout<< arr[0]<<std::endl;

    arr[0] = 10;
    std::cout<< arr[0]<<std::endl;

    for (size_t i{0} ; i < arr.size(); ++i)
        std::cout <<arr[i]<<std::endl;

    arr.fill(2);
    for (const auto& element : arr)
        std::cout<< element<< std::endl;

    std::cout <<"Taille : "<< arr.size() <<std::endl;
    std::cout <<"Taille : " << std::size(arr)<<std::endl;

    if(std::empty(arr))
        std::cout << "Oui" << std::endl;
    else 
        std::cout<< "Non "<<std::endl;

    return 0;
}