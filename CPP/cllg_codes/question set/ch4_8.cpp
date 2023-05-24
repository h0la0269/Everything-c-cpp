#include<bits/stdc++.h>
using namespace std;
double power(double m,int n){
	return pow(m,n);
}
double power(double m){
	return pow(m,2);
}

int main(){
	double m;
	int n=-1;
	cout<<"Enter m: ";
	cin>>m;
	cout<<"Enter n:";
	cin>>n;
	cout<<"The answer: ";
	(n!=-1)?cout<<power(m,n):cout<<power(m);
	return 0;
}