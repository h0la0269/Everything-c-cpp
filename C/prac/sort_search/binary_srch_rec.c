#include <stdio.h>
#include <stdlib.h>

int bs(int a[],int sr,int low,int high){
	while(low<=high){
		int mid=(low+high)/2;
		if(sr==a[mid])
			return mid;
		else if (sr>mid)
			return bs(a,sr,mid+1,high);
		else
			return bs(a,sr,low,mid-1);
	}
	return -1;
}

int main (){
	int *arr, n,num;
	int res;
	printf("\nBINARY SHORT\n");
	printf("Enter no.of inputs: ");
	scanf("%d", &n);
	printf("Enter %d numbers:\n", n);
	arr=(int *)malloc(n*sizeof(int));
	for(int i = 0; i < n; ++i)
     		scanf("%d", &arr[i]);
	printf("\nEnter the number to be searched: ");
	scanf("%d", &num);
	res=bs(arr,num,0,n-1);
	(res==-1)?printf("Element not found\n"):printf("Element found at index %d",res);
	return 0;
}