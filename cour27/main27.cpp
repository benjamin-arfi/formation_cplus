#include <iostream>
#include <string>
#include <vector>
/*
   <iterator: on peut deplacer le curseur on peut modifier les ellement
   const <iterator : on peut modifier les ellements du conteneur
   <const_iterator> : on peut deplacer le curseur
   const <const_iterator> : rien

   begin(),end()
   cbegin(), cend()
   std::begin()...

   std::next(), std::prev()
   std::rbegin(partir de la fin) (), std::rend()
*/
int main()
{
    using namespace std::literals;
    std::string sentence {"Bonjour tout le monde"s};
    std::vector<int> vec{1,2,3,4,5};

    // std::string::iterator it{std::begin(sentence)};

    // std::cout << *it<< std::endl;
    // it = std::next(it);
    // std::cout<<*it<<std::endl;
    // it = std::end(sentence);
    // std::cout<<*it<<std::endl;
    
    // std::string::const_iterator e{std::begin(sentence)};
    // std::cout<<*e<<std::endl;

    for (auto it = std::begin(vec) ; it != std::end(vec); it = std::next(it))
        std::cout <<*it<<std::endl;

    return 0;
}