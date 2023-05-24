//implying the max heap using heapify


#include<iostream>
#include<vector>
using namespace std;

void swap(int *a,int *b){
	int temp=*b;
	*b = *a;
	*a=temp;

}

void display(vector<int>& hT){
	cout<<"The tree after heapify is: "<<endl;
	for(const int &i :hT){
		cout<<i<<" ";
	}
}

void heapify(vector<int>& heapTree, int i){
	int size=heapTree.size();
	int largest=i;
	int leftChild=2*i+1;
	int rightChild=2*i+2;
	if(leftChild<size and heapTree[leftChild] > heapTree[largest])
		largest=leftChild;
	if(rightChild<size and heapTree[rightChild] >heapTree[largest])
		largest=rightChild;
	if(largest!=i){
		swap(&heapTree[i],&heapTree[largest]);
		heapify(heapTree, largest);
	}
	 
}

void insert(vector<int>& heapTree, int newNum){
	int size = heapTree.size();
	if(size == 0)
		heapTree.push_back(newNum);
	else{
		heapTree.push_back(newNum);
		for(int i=size/2;i>=0;--i)
			heapify(heapTree,i);
	}
}

int main(){
	vector<int> vect;
	insert(vect,10);
	insert(vect, 3);
  	insert(vect, 4);
 	insert(vect, 9);
  	insert(vect, 5);
  	insert(vect, 2);
	display(vect);
	return 0;
}