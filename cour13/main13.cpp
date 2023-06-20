#include <iostream>
#include <fstream>
#include<string>

/*
    std::ios::out, std::ios::in
    std::ios::binary
    std::ios::trunc
    std::ios::ate
    std::ios::app
*/
int main()
{
    std::ifstream r{"animals.txt"};//std::ios::in

    if (r.is_open())
    {
        std::string name{""};
        r>> name;
        std::cout<<name<<std::endl;
    }

    std::ifstream f{"animals.txt"};//std::ios::in

    if (f.is_open())
    {
        std::string line{""};
        std::getline(f >> std::ws,line);
        std::cout<<line<<std::endl;
    }
    

    std::ofstream w{"data.txt"};//std::ios::out

    if(w.is_open());
    {
        int scoreJoueur {114};
        w << scoreJoueur;
    }
    
    return 0;
}