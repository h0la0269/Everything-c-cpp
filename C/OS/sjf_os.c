//SJF
#include<stdio.h>

void swap(int *a, int* b){
	int temp=*a;
	*a=*b;
	*b=temp;
}

void bubble(int arr[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1])
				swap(&arr[j],&arr[j+1]);
		}
	}
}

int main(){
	int n;
	float s=0,avg;
	printf("Enter no.of processes: ");
	scanf("%d",&n);
	int arr[n],wt[n],tat[n];
	printf("Enter burst times:\n");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]); 

	//everything is the same as FCFS, just we need to sort the input of burst times. Using bubble sort here.

	bubble(arr,n);

	//WAITING TIME CALCULATION
	wt[0]=0; 
	for(int i=1;i<n;i++){
		wt[i]=arr[i-1]+wt[i-1];
	}

	for(int i=0;i<n;i++){
		s+=wt[i];
	}

	//calculating the average of that
	avg=s/n;
	printf("The avg waiting time: %f",avg); //printing the avg waiting time.
	//--------------------------------------------------------------------





	//TURN AROUND TIME CALCULATION

	//changing value of 's' as it might show garbage afterwards coz we gonna use it again to add all the turn around times of each processes.
	s=0;

	tat[0]=arr[0];

	for(int i=1;i<n;i++)
		tat[i]=tat[i-1]+arr[i];

	for(int i=0;i<n;i++)
		s+=tat[i];
	avg=s/n;
	printf("\navg turn around time: %f",avg);
	//-------------------------------------------------------------------------



	return 0;
}
