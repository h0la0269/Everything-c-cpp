//WAP to find out the volume of cube, cylinder and rectangular box using function overloading.
#include<iostream>
using namespace std;

double volume(double s){
	return s*s*s;
}
double volume(double rad, double height){
	return (3.14*rad*rad*height);
}
double volume(double l, double b, double h){
	return l*b*h;
}


int main(){
	double side, radius, length, breadth,height;
	cout<<"Cube\n";
	cout<<"Enter side length: ";
	cin>>side;
	cout<<"Volume of Cube: "<<volume(side)<<endl;
	cout<<"Cylinder\n";
	cout<<"Enter radius: ";
	cin>>radius;
	cout<<"Enter height: ";
	cin>>height;
	cout<<"Volume of Cylinder: "<<volume(radius, height)<<endl;
	cout<<"Rectangular Box\n";
	cout<<"Enter length: ";
	cin>>length;
	cout<<"Enter breadth: ";
	cin>>breadth;
	cout<<"Enter height: ";
	cin>>height;
	cout<<"Volume of Rectange: "<<volume(length, breadth,height)<<endl;
	return 0;
}