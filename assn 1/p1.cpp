//Given an array. Let us assume that there can be duplicates in the list. Write a program to searchfor an element in the list in such a way that we get the highest index if there are duplicates.
#include<iostream>
#include<vector>
using namespace std;

int searchHigh(vector<int>& v, int t){
	for(int i=v.size()-1;i>=0;i--){
		if(v[i]==t)
			return i+1;
	}
	return -1;
}



int main(){
	int n,inp,target,res;
	vector<int> arr;
	cout<<"Enter array length: ";
	cin>>n;
	cout<<"Enter elements\n";
	for(int i=0;i<n;i++){
		cin>>inp;
		arr.push_back(inp);
	}
	cout<<"The array: ";
	for(auto i: arr)
		cout<<i<<" ";
	cout<<"\nEnter target element: ";
	cin>>target;
	res=searchHigh(arr,target);
	(res==-1)? cout<<"Given target not in the input array\n": cout<<"Target is in index: "<<res<<endl;
	return 0;
}