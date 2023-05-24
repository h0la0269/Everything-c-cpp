#include<stdio.h>
#include<math.h>
int convert(long long int);
int main (){
	int n;
	printf("Enter a binary: ");
	scanf("%lld",&n);
	printf("Decimal equivalent: %lld", convert(n));
	return 0;
}
int convert(long long int n){
	int dec=0,i=0,num;
	while(n!=0){
		num=n%10;
		n/=10;
		dec+=num*pow(2,i);
		i++;
	}
	return dec;
}