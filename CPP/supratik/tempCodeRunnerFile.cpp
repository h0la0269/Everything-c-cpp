//addition and subtraction of complex number using operator overloading// 

#include <iostream>
using namespace std;

class complex{
    public:
    int real,imaginary;
    complex (){
        real=imaginary=0;
    }
    complex(int a,int b){
        this->real=a;
        this->imaginary=b;
    }
    //operator overloading of addition
    complex operator+(complex c2){
        complex r;
        r.real=real+c2.real;
        r.imaginary=imaginary+c2.imaginary;
        return r;
    }
    //operator overloading of subtraction
    complex operator-(complex c){
        complex sub;
        sub.real=real-c.real;
        sub.imaginary=imaginary-c.imaginary;
        return sub;
    }
};

int main(){
    int a,b;
    cout<<"Enter first complex: "<<endl;
    cout<<"Real: ";
    cin>>a;
    cout<<"Imaginary: ";
    cin>>b;
    complex A(a,b);
    cout<<"Enter second complex: "<<endl;
    cout<<"Real: ";
    cin>>a;
    cout<<"Imaginary: ";
    cin>>b;
    complex B(a,b);
    complex C=A+B;
    complex D=A-B;
    cout<<"\nComplex Addition: "<<endl;
    cout<<"-> "<<C.real<<" + "<<C.imaginary<<"i"<<endl;
    cout<<"\nComplex Addition: "<<endl;
    cout<<"Subtracting first with second"<<endl;
    cout<<"-> "<<D.real<<" + ("<<D.imaginary<<")i"<<endl;
    return 0;
}