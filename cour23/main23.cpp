#include <iostream>
#include <string>
#include <stack>

/*
    size(), empty(),
    push(),pop() supprimez le derniere ellement,top() dernier ellement
*/
int main()
{
    std::stack <int> st;

    st.push(4);
    st.push(3);
    st.push(2);

    while (!st.empty())
    {
        std::cout<<st.top()<<std::endl;
        st.pop();
    }
    std::cout<<"\n";
}