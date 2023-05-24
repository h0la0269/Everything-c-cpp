//Given a number n, print n-th Fibonacci Number using Dynamic Programming.
//Iterative method
#include<iostream>
using namespace std;

int fibo(int n){
	int arr[n];
	arr[0]=0;
	arr[1]=1;
	for(int i=2;i<=n;i++)
		arr[i]=arr[i-1]+arr[i-2];
	return arr[n];
}

int main(){
	int n;
	cout<<"Enter which no. in the fibonacci series to be displayed : ";
	cin>>n;
	cout<<"The fibonacci number is: "<<fibo(n)<<endl;
	return 0;
}