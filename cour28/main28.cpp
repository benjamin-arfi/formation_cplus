#include <iostream>
#include<string>
#include <vector>
#include <algorithm>

/*
    std::fill()
    std::equal()
    std::find(),std::search()
    std::count()
    std::sort, std::reverse()
    std::replace()
    std::remove(), std::erase()
    std::swap()
    std::for_each()
    std::all_of(), std::any_of(), std::none_of()
*/
void print_element(int n)
{
    std::cout<<n<<std::endl;
}
bool is_pair(int n)
{
    return n % 2 == 0;
}
int main()
{
    std::vector <int> vec{5,2,4,9,1,7};
    std::vector <int> vec_two{1,2,3,4,5,6};

    std::cout<<std::any_of(std::begin(vec_two),std::end(vec_two),is_pair)<<std::endl;

    std::for_each(std::begin(vec),std::end(vec),print_element);
    auto begin{std::begin(vec)};
    auto end {std::end(vec)};
    std::sort(begin,end);
    std::reverse(begin,end);
    for (const auto& e :vec)
        std::cout<<e<<std::endl;


    std::string s{"Bonjour"};

    std::cout<< s << std::endl;

    std::replace(std::begin(s), std::end(s),'o','i');
    std::cout<< s<< std::endl;
    // std::string search_term{"jour"};

    // std::cout<<std::count(std::begin(s),std::end(s),'o')<<std::endl;
    // auto s_begin = std::begin(s);
    // auto s_end = std::end(s);

    // auto search_begin = std::begin(search_term);
    // auto search_end = std::end(search_term);

    // if(std::search(s_begin,s_end,search_begin,search_end) != s_end)
    //     std::cout<<"oh lalala"<<std::endl;

    // if (std::equal(std::begin(vec),std::end(vec),std::begin(vec_two),std::end(vec_two)))
    // {
    //     std::cout<<"oui"<<std::endl;
    // }

    // auto begin =std::begin(vec);
    // auto end = std::end(vec);
    // if(std::find(begin, end,6) != end)
    //     std::cout<<"oui!"<<std::endl;

    // for (const auto& e:vec)
    //     std::cout<<e<<std::endl;
    // std::fill(std::begin(vec ), std::end(vec), 0);
    // for (const auto& e:vec)
    //     std::cout<<e<<std::endl;
    return 0;
}