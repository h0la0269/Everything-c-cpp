#include<iostream>
using namespace std;

class dist{
	float feet, inches;
	public:
		dist(){
			feet=inches=0;
		}
		dist(float ft, float inch){
			feet=ft;
			inches=inch;
		}
		void output();
		void input();

};

void dist::input(){
	cout<<"Enter in feet: ";
	cin>>feet;
	cout<<"Enter in inches: ";
	cin>>inches;
}

void dist::output(){
	cout<<"Value in feet and inches are: "<<feet<<" "<<inches;
}

int main(){
	dist d1,d2,d3;
	d1.input();
	d2.input();
	d3.input();
	cout<<"Output for D1"<<endl;
	d1.output();
	cout<<endl;
	cout<<"Output for D2"<<endl;
	d2.output();
	cout<<endl;
	cout<<"Output for D3"<<endl;
	d3.output();
	cout<<endl;
	return 0;
}