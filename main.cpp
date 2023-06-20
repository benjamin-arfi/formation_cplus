#include <iostream>
#include <string>
/*
    std::cout: affichage standard(en memoire tampon)
    std::cerr: erreurs (affichage direct)
    std::clog journalisation (en memoire tampon)

    std::endl : retour a la ligne (/n) + flush
    std ::flush

    /n : retour a la ligne 
    /t : tabulation 
    // : afficher un antislash
*/

/*
    u,U(non signe)
    f,F (flottant)
    l,L(long int ,long double) ('')
    ll ,LL (long long int)

    prefixes
    0b(binaire)
    0(octal)
    0x(hexadecimal)

*/

int main()
{
    std::string welcome_mesage{"Coucou !"};
    std::cout << welcome_mesage << std::endl;
    // bool is_secure{};
     const int some_number{1445};
    //  auto 
    std::cout << some_number << std::endl;

    welcome_mesage = "Hello";
    std::cout << welcome_mesage << std::endl;


    return 0;

}

