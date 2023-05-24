#include<stdio.h>
void main (){
	int i,j,s=0;
	for(i=0;i<=5;i++){
		for(j=1;j<=i;j++){
			printf("%c ",(95+s));
            s++;
		}
        for(j=5;j>=i;j--){
            printf("%c ",s++);
        }
		printf("\n");
	}
}