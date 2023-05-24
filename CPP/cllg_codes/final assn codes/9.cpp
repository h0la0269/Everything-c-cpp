#include<iostream>
using namespace std;
class Cone{
	int bR,slantHeight;
	public:

	Cone(){
		bR=0;
		slantHeight=0;
	}
	Cone(int r,int h){
		bR=r;
		slantHeight=h;
	}
	Cone(Cone& r){
		bR=r.bR;
		slantHeight=r.slantHeight;
	}
	double area()
};