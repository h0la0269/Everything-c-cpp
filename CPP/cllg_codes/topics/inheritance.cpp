#include<iostream>
using namespace std;

class Parent{
	public:
		int x;
		Parent(){
			cout<<"Parent Constructor\n";
		}
		~Parent(){
			cout<<"Parent Destructor\n";
		}
};

class Child:public Parent{
	public:
		int y;
	Child(){
		cout<<"Child Constructor\n";
	}
	~Child(){
		cout<<"Child Destructor\n";
	}
};

int main(){
	Child ob;
	cin>>ob.x>>ob.y;
	cout<<"Parent input: "<<ob.x<<endl;
	cout<<"Child input: "<<ob.y;
	cout<<endl;
	return 0;
}