#include<iostream>
using namespace std;
class Date{
	public:
		int m,d,y;
		Date(){
		m=d=y=0;	
		}
		Date(int d,int m,int y){
			this->d=d;
			this->m=m;
			this->y=y;
		}
		void display();
		Date operator+(Date&);

};

void Date::display(){
	cout<<this->d<<"/"<<this->m<<"/"<<this->y<<endl;
}

Date Date::operator+(Date& obj){
	Date n;
	n.d=d+obj.d;
	n.m=m+obj.m;
	n.y=y+obj.y;
	return n;
}

int main(){
	Date d1,d2(23,12,2022),d3(10,9,2022);
	d1.display();
	d2.display();
	d3.display();
	Date d4=d2+d3;
	d4.display();
	return 0;
}