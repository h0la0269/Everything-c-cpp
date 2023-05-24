#include<iostream>
using namespace std;

class dist{
	friend void input();
	friend int main();
	float feet, inches;
	int i=1;
	
		dist(){
			feet=inches=0;
		}
		dist(int a){
			inches=a;
		}
		dist (float b){
			feet=b;
		}
		dist(int &a,int &b){
			feet=a;inches=b;
			cout<<a<<" "<<b<<endl;
		}
		dist(dist& b){
			feet=b.feet;
			inches=b.inches;
		}

};

void input(){
	int a,b;
	cout<<"enter feet and inches: ";
	cin>>a>>b;
	dist(a,b);
}

int main(){
	dist A;
	input();
	return 0;
}