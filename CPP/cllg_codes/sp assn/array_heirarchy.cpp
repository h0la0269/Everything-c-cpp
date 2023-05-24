#include<iostream>
using namespace std;
class Array{
	int* arr;
	int size;
	public:
		Array(int s){
			this->size=s;
			this->arr=new int[size];
		}
		void swapArr(int a, int b){
			swap(this->arr[a],this->arr[b]);
		}
};
class Heap:public Array{
	virtual void insertHeap()=0;
	virtual void deleteHeap()=0;
};
class Max_Heap:public Heap{
	
};


int main(){

	return 0;
}