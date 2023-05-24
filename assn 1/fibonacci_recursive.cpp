//Given a number n, print n-th Fibonacci Number using Dynamic Programming.
//Recursive method
#include<iostream>
using namespace std;

int fibo(int n){
	int a[n+1];
	for(int i=0;i<n;i++)
		a[i]=-1;
	if (n==0)
		return 0;
	if (n==1)
		return 1;
	if (a[n] != -1)
		return a[n];
	a[n]=fibo(n-1)+fibo(n-2);
	return a[n];
}
int main(){
	int n;
	cout<<"Enter which no. in the fibonacci series to be displayed : ";
	cin>>n;
	cout<<"The fibonacci number is: "<<fibo(n)<<endl;
	return 0;
}