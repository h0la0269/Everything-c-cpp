#include <iostream>
using namespace std;

class demo
{
    public:
    demo ()
    {
        cout<<"Default constructor :    "<<this<<endl;
    }
    demo (int)
    {
        cout<<"Parameterized constructor :  "<<this<<endl;
    }
    ~demo ()
    {
        cout<<"Destructor : "<<this<<endl;
    }
};

int main(){
    demo d1,d2(20);
    cout<<"Hi"<<endl;
    {
        demo d3,d4; //the scope of these objects are smaller and hence are destroyed earlier
    }
    cout<<"Hello"<<endl;
    return 0;
}