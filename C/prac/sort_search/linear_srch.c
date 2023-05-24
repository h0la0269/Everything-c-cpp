#include <stdio.h>
#include <stdlib.h>

int linear_search(int arr[],int inp,int sr){
	int k=sr;
	for(int i=0;i<inp;++i){
		if(k==arr[i])
			return i;
		else
			return i=-1;
	}

}

int main(){
	int *arr,n,num,s;
	printf("\nLINEAR SEARCH\n");
	printf("Enter no.of inputs: ");
	scanf("%d", &n);
	printf("Enter %d numbers:\n", n);
	arr=(int *)malloc(n*sizeof(int));
	for(int i = 0; i < n; ++i)
     		scanf("%d", &arr[i]);
	printf("\nEnter the number to be searched: ");
	scanf("%d", &num);
	s=linear_search(arr, n,num);
	(s==-1)? printf("Element not found\n"): printf("Element found at index %d",s);
	return 0;
}