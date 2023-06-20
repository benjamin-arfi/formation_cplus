#include<iostream>
#include<string>
#include<cassert>


// void CreatePlayer(std::string name, int level)
// {
//     assert(level>0 && "Le niveau d'un joueur est au minimum de 1");
//     std::cout<<"creation de "<<name<<", de niveau " <<level<<std::endl;
// }

int main()
{
    try
    {
        /* code */
        throw std::invalid_argument("oups");
        throw std::exception();
    }
    catch(const std::invalid_argument& err)
    {
        
        std::cout << err.what() << std::endl;
    }
    catch(const std::exception& err)
    {
      std::cout<<"Une erreur s'est produite"<<std::endl;
    }
  
    
    // CreatePlayer("Robert", 25);
    // return 0;
}