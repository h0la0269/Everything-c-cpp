#include<iostream>
#include<vector>
using namespace std;
void insertionSort(vector<int> &num){
	for(int i=0;i<num.size()-1;++i){
		for(int j=i+1;j>0;--j){
			if(num[j-1]>num[j])
				swap(num[j],num[j-1]);
			else break;
		}
	}
}
int main(){
	int len,n;
	vector<int> v;
	cout<<"Insertion Sort\nEnter length: ";
	cin>>len;
	cout<<"Enter "<<len<<" elements:\n";
	while(len--){
		cin>>n;
		v.push_back(n);
	}
	insertionSort(v);
	for(const int& i: v)
		cout<<i<<" ";
	cout<<endl;
	v.clear();
	return 0;
}