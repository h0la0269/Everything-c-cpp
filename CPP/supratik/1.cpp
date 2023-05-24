#include <iostream>
using namespace std;

float area(float base, float height)
{
    return (base*height)/2;
}
float area(float rad)
{
    return 3.14*rad*rad;
}

int main ()
{
    cout<<area(3,5)<<endl;
    cout<<area(6)<<endl;
    return 0;
}