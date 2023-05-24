#include<iostream>
using namespace std;

class className{
	public:
	className(){
		cout<<"Constructor :"<<this<<endl;
	}
	~className(){
		cout<<"Destructor :"<<this<<endl;
	}
};


int main(){
	className c1;
	{
		className c3;
	}
	className c2;
	return 0;
}