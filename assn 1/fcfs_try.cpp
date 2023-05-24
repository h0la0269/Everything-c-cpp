#include<stdio.h>

float add_times(int a[],int n){
	int s=0;
	for(int i=0;i<n;i++)
		s+=a[i];
	return s;
}

int main(){
	int n;
	float avg;
	printf("Enter no.of processes: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter burst times:\n");
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}

	//waiting time
	int wt[n];
	wt[0]=0;
	for(int i=1;i<n;i++){
		wt[i]=wt[i-1]+arr[i-1];
	}

		avg=add_times(wt,n)/n;
	printf("\nwaiting time: %f\n",avg);

	//turn around time
	int tat[n];
	tat[0]=arr[0];
	for(int i=1;i<n;i++){
		tat[i]=tat[i-1]+arr[i];
	}
	
	avg=add_times(tat,n)/n;
	printf("turn around time: %f\n",avg);
	return 0;
}