#include <iostream>
#include <string>
void printHelloWorld()
{
    std::cout<<"hello World "<<std::endl;
}
int sum(int a,int b)
{
    return a + b;
}
void setNumbers(int& a , int& b)
{
    a -= 6;
    b +=2;
}

void printSum(int a, int b)
{
    std::cout<< a + b<< std::endl;
}
void printSum(float a ,float b)
{
    std::cout<< a+b << std::endl;
}

/*
    var: passage par copie
    &var : paasage par reference 

    = : tout passage par copie
    & : tout passage par reference
*/
int main()
{
    printHelloWorld();

    auto result1 = sum(14,7);
    std::cout << result1<< std::endl;

    auto n{5};
    auto m{9};
    auto result2 = sum(n,m);
    std::cout << result2<<std::endl;
   

    int r{3};
    int s{4};
    std::cout <<r<<" "<<s<< std::endl;
    setNumbers(r,s);

    std::cout <<r<<" "<<s<<std::endl;

    printSum(4, 7);
    printSum(6.9F, 10.03F);

    int q{67};
    int w{34};

    std::cout<<q << " - "<< w<<std::endl;

    auto func = [= , &w ]() mutable -> void
    {
        q+=3;
        w -= 2;
        std::cout<< q<< " - "<<w<< std::endl;
    };
    func();

    std::cout<< q << " - "<<w<<std::endl;
    return 0;
}