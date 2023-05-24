#include<stdio.h>
int main()
{
	int a,b,c;
	printf("ENTER A NUMBER: ");
	scanf("%d", &a);
	if((a>>2)==1)
		printf("Odd");
	else
		printf("Even");
	return 0;
}