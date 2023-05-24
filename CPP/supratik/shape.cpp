#include <iostream>
#include<cmath>
#include <string.h>
using namespace std;

class shape
{
    protected:
    float s,r,h;
    public:
    char sname[10];
    shape(const char a[])
    {
        strcpy(sname,a);
    }
    virtual float area()=0;
    virtual float volume()=0;
};

class cube:public shape
{
    public:
    cube(float n): shape("Cube")
    {
        this->s=n;
    }
    float area()
    {
        return 6*s*s;
    }
    float volume()
    {
        return s*s*s;
    }
};

class cone:public shape
{
    public:
    cone(float a,float b): shape("Cone")
    {
        this->r = a;
        this->h = b;
    }
    float area()
    {
        return 3.14*r*(r+(sqrt(r*r+h*h)));
    }
    float volume()
    {
        return 3.14*r*r*h/3;
    }
};

int main ()
{
    int n,ch;
    float s,r,h;
    cout<<"Enter no. of Shapes you want to add: ";
    cin>>n;
    shape *ptr[n];
    cout<<"Choose the shapes in Order:"<<endl;
    cout<<"1 - Cube\n2 - Cone"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Enter Choice: ";
        cin>>ch;
        switch (ch)
        {
        case 1:
            cout<<"Enter Size: ";
            cin>>s;
            ptr[i] = new cube(s);
            cout<<"Cube created."<<endl;
            break;
        case 2:
            cout<<"Enter Radius: ";
            cin>>r;
            cout<<"Enter Height:";
            cin>>h;
            ptr[i] = new cone(r,h);
            cout<<"Cone created."<<endl;
            break;
        default:
            cout<<"Give proper input."<<endl;
            i--;
            break;
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<"Shape "<<i+1<<" - "<<ptr[i]->sname<<endl;
        cout<<"Area = "<<ptr[i]->area()<<endl;
        cout<<"Volume = "<<ptr[i]->volume()<<endl;
        cout<<endl;
    }
    return 0;
}