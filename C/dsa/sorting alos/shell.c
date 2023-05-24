#include <stdio.h>
#include <stdlib.h>

void shell(int arr[],int size){
	int gap = size/2;
	int i,j,t;
	while(gap>0){
		for(i=gap;i<size;++i){
			for(t=arr[i], j=i-gap;j>=0 && t<arr[j];j-=gap) {
				arr[j+gap]=arr[j];
			}
			arr[j+gap]=t;
		}
		gap/=2;
	}
}

int main (){
	int num;
	int *arr;
	arr=(int *)malloc(num*(sizeof(int)));
	printf("\n\nSHELL SORT\n");
	printf("Enter numbers to be inserted: ");
	scanf("%d", &num);
	printf("Enter %d numbers: \n",num);
	for(int i =0; i<num;++i){
		scanf("%d", &arr[i]);
	}
	shell(arr, num);
	printf("The sorted list:");
	for(int i=0; i<num;++i){
		printf(" %d", arr[i]);
	}
	printf("\n");
	return 0;
}