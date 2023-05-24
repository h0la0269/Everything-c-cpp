// WAP to add two integers, two floats and two strings. Overload + operator.
#include<iostream>
using namespace std;
class Add{
	public:
		int a;
		float af;
		string as;
		Add(){
			a=0;
			af=0;
			as='\0';
		}
		Add(int &a1){
			a=a1;
		}
		Add(float &f){
			af=f;
		}
		Add(string& s1){
			as=s1;
		}
		Add operator+(Add const &o){
			Add n;
			n.a=this->a+o.a;
			n.af=this->af+o.af;
			n.as=this->as+o.as;
			return n;
		}

};
int main(){
	// int operation
	int i=10,j=20;
	Add a1(i),a2(j);
	Add a3=a1+a2;
	cout<<a3.a<<endl;
	//float operation
	float f=8.2,g=3.2;
	Add f1(f),f2(g);
	Add f3=f1+f2;
	cout<<f3.af<<endl;
	// string operation
	string s1="Hello";
	string s2=" World";
	Add s(s1),t(s2);
	Add sA=s+t;
	cout<<sA.as<<endl;
	return 0;
}