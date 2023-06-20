#include <iostream>
#include <string>
#include "someone.hpp"
#include "english.hpp"
#include "fr.hpp"

int main()
{
    //  Bientot apprendre a faire ca: liste/ tableau de "someone"
    /*
        Declarer une liste un tableau de someone initialise avec plusieurs objets derives (francais anglais)

        pour chaque "someone " de la liste tableau, faire appel a saygoodnight()

        si c'est un anglais alors appeler sa methode 
        sinn si indonesien alors appele sa methodes
    */
    English en{" Jack"};
    en.sayGoodNight();

    Francais fr{" Jean"};
    fr.sayGoodNight();
    return 0;
}