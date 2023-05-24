#include<stdio.h>
void toh(int n, char s, char a, char d){
    if(n==1){
	printf("%d is moved from %c to %c.\n",n ,s,d);
	return;
    }
    toh(n-1,s ,d, a);
    printf("%d is moved from %c to %c.\n", n,s,d);
    toh(n-1, a, d, s);
}
int main(){
    int n;
    printf("Enter number of disks: \n");
    scanf("%d",&n);
    toh(n,'S','A','D');
    printf("\n\nEND\n");
    return 0;
}