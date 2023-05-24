#include<iostream>
#include<vector>
using namespace std;

void concatenate(vector<int>& nums, int size){
	vector<int> ans;
	int count=2;
	while(count!=0){
	for(int i=0;i<size;++i)
		ans.push_back(nums[i]);
	count--;
	}
}

int main(){
	vector<int> v;
	int n,b;
	cout<<"Enter size: ";
	cin>>n;
	while(n--){
		cin>>b;
		v.push_back(b);
	}
	concatenate(v,v.size());
	cout<<endl;
	return 0;
}