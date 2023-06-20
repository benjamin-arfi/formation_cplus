#include <iostream>

/*
    Arithmetique: + - * / %
    Booleens : !(ne pas) &&(et) ||(ou) que sur du vrai ou faux
    comparaison: < <= > >= == !=
    Divers : += -= *= /= %=  ++ --

    result = data++: // result <- 0 / data +1
    result = ++data ; // data +1 /result <- data
*/
int main()
{

    int player_level{1};
    std::cout << "Niveau actuel :"<< player_level<< std::endl;

    player_level+=1;

    std::cout<<"Niveau actuel :"<<player_level<< std::endl;
    return 0;
}