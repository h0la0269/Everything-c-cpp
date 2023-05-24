#include<stdio.h>
int main()
{
	int c;
	short s=1;
	char *p;
	p=(char*)&s;
	if(*p==1)
		printf("\nLittle Endian");
	else 
		printf("\nBig Endian");
	return 0;
}