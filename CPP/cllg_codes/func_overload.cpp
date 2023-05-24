#include<iostream>
using namespace std;
#define PI 3.14
float area(float r)
{
    return PI * r* r;
}

float area(int a){
    return a*a*a;
}

float area(float b,float h)
{
    return 0.5*b*h;
}
int main()
{
    float x=5.6;
    int f=69;
    cout<<"vol of cube: "<<area(f)<<endl;
    cout << "area of a circle:" << area(x) << endl;
    cout << "area of a triangle:" << area(3.3,1.2) << endl;
    return 0;
}
