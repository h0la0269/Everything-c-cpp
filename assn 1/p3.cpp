#include<bits/stdc++.h>
using namespace std;
vector<int> search(vector<int>arr,int target){
	vector<int> result;
   	for(int i=0 ;i< arr.size();i++){
		int low = i+1;
		int high = arr.size()-1;
		while ( low < high ){
			if ( arr[i]+arr[low]+arr[high]== target ){
				result.push_back( i);
				result.push_back(low);
				result.push_back(high);
				return result;
			}
			else if (arr[i]+arr[low]+arr[high]<target ){
				low++;
			}
			else {
			high--;
			}
		}
	}
   return result;
}
int main(){
    	vector<int>result;
   	vector<int>arr = {1,2,4,4,4,6,7,8,9,10,11,12,15,55,105};
    	int target= 53;
    	result = search(arr,target);
    	if(result.size() == 0){
      	cout <<"No Combination Available";
   	}
    	else{
		cout <<"ith index -> " <<result[0] << endl;
		cout <<"jth index -> " <<result[1] << endl;
		cout <<"kth index -> " <<result[2] << endl;
    	}
    return 0;
}
