#include <iostream>
using namespace std;

template<class t>
class stack
{
    t *arr;
    int tos,size;
    public:
    stack();
    stack(int);
    stack(const stack&);
    bool isempty();
    bool isfull();
    void push(t);
    t pop();
    t peek();
    ~stack();
};
template<class t>
stack<t>::stack()
{
    arr=new t[10];
    size=10;
    tos=-1;
}
template<class t>
stack<t>::stack(int S)
{
    arr=new t[S];
    size=S;
    tos=-1;
}
template<class t>
void stack<t>::isempty()
{
    
}
int main ()
{
    
    return 0;
}