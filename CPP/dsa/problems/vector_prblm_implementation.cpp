#include<iostream>
#include<vector>
using namespace std;

void add(vector<int>& vec, int val){
	vec.push_back(val);
	for(const int& i:vec)
		cout<<i<<" ";
}

void reverse(vector<int>& intV){
	for(auto i=intV.rbegin();i!=intV.rend();++i)
		cout<<*i<<" ";
}

int main(){
	int choice,num;
	vector<int> intVector;
	while(true){
		cout<<"-----Operations-----"<<endl;
		cout<<"\n1: Add elements at the end"<<endl;
		cout<<"2: Reverse the vector"<<endl;
		cout<<"3: Print the size of the vector"<<endl;
		cout<<"4: Sort in assending order"<<endl;
		cout<<"5: Sort in descending order"<<endl;
		cout<<"6: Exit"<<endl;
		cout<<"7: Enter your choice: "<<endl;
		cin>>choice;

		switch (choice)
		{
		case 1:
			cout<<"Enter number to be added: ";
			cin>>num; 
			add(intVector,num);
			break;
		case 2:
			reverse(intVector);
			break;
		case 7:
			return false;
		default:
			break;
		}
	}
}