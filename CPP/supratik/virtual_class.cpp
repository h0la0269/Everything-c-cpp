#include <iostream>
using namespace std;

class a{
    protected:
    double x;
};
class b: public a{};
class c: public a{};
class d: virtual public b,virtual public c{};

int main ()
{
    cout<<"Size of a = "<<sizeof(a)<<endl;
    cout<<"Size of b = "<<sizeof(b)<<endl;
    cout<<"Size of c = "<<sizeof(c)<<endl;
    cout<<"Size of d = "<<sizeof(d)<<endl;
    return 0;
}