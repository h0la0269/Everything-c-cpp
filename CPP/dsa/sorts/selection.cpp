#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int> &r){
	int size=r.size();
	for(int i=0;i<size-1;++i){
		int min=i;
		for(int j=i+1;j<size;++j){
			if(r.at(min)>r.at(j))
				min=j;
		}
		if(min!=i)
			swap(r.at(min), r.at(i));
	}
}

void printVector(vector<int>& a){
	for(auto &i:a)
		cout<<i<<" ";
	cout<<endl;
}

int main(){
	vector<int> arr;
	int num,n;
	cout<<"Selection  Sort\n";
	cout<<"Enter no.of elements: ";
	cin>>num;
	cout<<"Enter "<<num<<" elements: ";
	for(int i=0;i<num;++i){
		cin>>n;
		arr.push_back(n);
	}
	printVector(arr);
	cout<<"After Sorting\n";
	selectionSort(arr);
	printVector(arr);
	return 0;
}