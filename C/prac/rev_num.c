#include<stdio.h>
void main()
{
	int a,s=0,c;
	printf("Enter a number: ");
	scanf("%d", &a);
	while(a>0){
		c=a%10;
		s=s*10+c;
		a/=10;
	}
	printf("%d", s);
}