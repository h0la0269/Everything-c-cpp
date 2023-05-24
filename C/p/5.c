/*
Question 5
1
1 4
1 4 9
1 4 9 16
*/
#include<stdio.h>
void main(){
	int n,i,j;
	printf("Enter the no.of lines to print: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++)
			printf("%d ",j*j);
		printf("\n");
	}
}