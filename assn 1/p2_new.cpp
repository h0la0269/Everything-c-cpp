//Write a program for finding i and j in an array A for any key such that A[j]2+ A[i]2== key

#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

pair <int,int> find_ij(vector<int> & arr, int key){
	unordered_map<int,int> seen;
	for(int i=0;i<arr.size();i++){
		int complement=key-arr[i]*arr[i];
		if(seen.count(complement))
			return make_pair(i,seen[complement]);
		seen[arr[i]*arr[i]]=i;
	}
	return make_pair(-1,-1);
}

int main(){
	vector<int> arr={1,2,3,4,5,6};
	int key=46;
	pair <int,int> ans=find_ij(arr,key);
	(ans.first==-1 && ans.second==-1)? cout<<"Key not found": cout<<"Key is found.\nIndex of i: "<<ans.first+1<<endl<<"Index of j: "<<ans.second+1;
	cout<<endl;
	return 0;
}