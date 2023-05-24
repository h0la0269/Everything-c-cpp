#include<stdio.h>

int convert(int);
void main(){
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("The binary equivalent is: %d\n", convert(n));
}
int convert(int n){
	int num,s;
	while(n!=0){
		num=n%2;
		s+=num;
		n/=10;
	}
	return s;
}