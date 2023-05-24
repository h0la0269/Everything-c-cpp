//basic example of inheritance
#include<iostream>
using namespace std;

//base class
class area{
	public://needed to access from other functions and also derived classes
		int setHeight(int h){
			return height=h;
		}
		int setWidth(int w){
			return width=w;
		}
	protected://need to protected to access from the derived class
		int height,width;
};


//derived class
class reactangle: public area{//should be public so that member variables of base class can be accessed from the derived class.

	public://need to  be public else cannot be accessed from other functions such as main function.
		int getArea(){
			return(width*height);
		}
};

int main(){
	reactangle rect;
	rect.setWidth(4);
	rect.setHeight(5);
	cout<<"Total area: "<<rect.getArea()<<endl;
	return 0;
}