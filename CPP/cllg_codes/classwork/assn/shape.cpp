#include<bits/stdc++.h>
using namespace std;
#define pi 3.14

class shape {
	protected:
		float s,r,h;
	public:
		virtual float area()=0;
		virtual float volume()=0;
};

class cube:public shape{
	public:
		cube();
		cube(float);
		float area();
		float volume();
};
cube::cube(){
	this->s=0;
}
cube::cube(float n){
	this->s=n;
}
float cube::area(){
	return 6*s*s;
}
float cube::volume(){
	return s*s*s;
}

class cone:public shape{
	public:
		cone();
		cone(float,float);
		float area();
		float volume();
};

cone::cone(){
	this->h=this->r=0;
}
cone::cone(float a,float b){
	this->r=a;
	this->h=b;
}
float cone::area(){
	return pi*r*(sqrt(r*r+h*h));
}
float cone::volume(){
	return pi*r*r*h/3;
}
int main(){
	float n,rad, sh;
	int no,choice;
	cout<<"\n CUBE and CONE\n\n";
	cout<<"Enter no.of shapes :";
	cin>>no;
	shape *ptr[no];
	for(int i=0;i<n;++i){
		cout<<"\nEnter the desired shape\n";
		cout<<"Cube->1\nCone->2\n";
		cout<<"Your Choice: ";
		cin>>choice;
		switch(choice){
			case 1:
				cout<<"Enter side of cube: ";
				cin>>n;
				ptr[i]=new cube(n);
			case 2:
				cout<<"Enter radius: ";
				cin>>rad;
				cout<<"Enter slant height: ";
				cin>>sh;
		}
	}
	return 0;
}