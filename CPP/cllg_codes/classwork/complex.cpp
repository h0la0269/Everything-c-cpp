//addition and subtraction of complex number using operator overloading

#include <iostream>
using namespace std;

class complex{
	friend complex input(complex);
	friend void display(complex);
    int real,imaginary;
    public:
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
		cout<<"real="<<real<<"imaginary="<<imaginary<<endl;
		cout<<"real="<<c2.real<<"imaginary="<<c2.imaginary<<endl;
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

	//operation overloading of multiplication
	complex operator*(complex c){
		complex s;
		s.real=(real*c.real)-(imaginary*c.imaginary);
		s.imaginary=(real*c.imaginary)+(imaginary*c.real);
		return s;
	}
};

void display(complex x){
	cout<<x.real<<" + ("<<x.imaginary<<")i"<<endl;
}
complex input(complex a1){
	cout<<"Enter a complex: "<<endl;
    cout<<"Real: ";
    cin>>a1.real;
    cout<<"Imaginary: ";
    cin>>a1.imaginary;
	complex(a1.real, a1.imaginary);
    return a1;
}



int main(){
	complex A,B;
    	complex firstComplex=input(A);
    	complex secondComplex=input(B);
	cout<<"Additon of Complex: ";
    	complex additionComplex=firstComplex+secondComplex;
	display(additionComplex);
	cout<<"Subtraction of Complex: ";
	complex subtractionComplex=firstComplex-secondComplex;
	display(subtractionComplex);
	cout<<"Multiplication of Complex";
	complex multiplicationComplex=firstComplex*secondComplex;
	display(multiplicationComplex);
    return 0;
}