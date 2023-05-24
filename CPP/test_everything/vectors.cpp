#include <iostream>
#include <vector>

using namespace std;
int main(){
	char opt;
	vector<int> vec={1,2,3,4,5,6,7,8};
	vector<int> vec1{1,2,3,4,5,6,7,8,9};
	vec1.push_back(123);
	vec.push_back('a');
	for(const int &var: vec)
		cout<<" "<<var;
	cout<<endl;
	for(const int &n: vec1)
		cout<<" "<<n;
	cout<<endl;
	cout<<vec.capacity()<<endl;
}