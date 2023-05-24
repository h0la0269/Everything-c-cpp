//FCFS
#include<stdio.h>
int main(){
	int n;
	float s=0,avg;
	printf("Enter no.of processes: ");
	scanf("%d",&n);
	int arr[n],wt[n],tat[n];
	printf("Enter burst times:\n");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]); //getting user input of all the burst times.



	//WAITING TIME CALCULATION

	//initilalizing the waiting time of the first process as ZERO, as no arrival time is given.
	wt[0]=0; 
	

	//putting the waiting time of each of the processes in wt[] array by adding the previous process waiting time with the current one, so on and so forth.
	for(int i=1;i<n;i++){
		wt[i]=arr[i-1]+wt[i-1];
	}


	for(int i=0;i<n;i++){
		//adding the waiting time of all the processes and storing it in 's'.
		s+=wt[i];
	}

	//calculating the average of that
	avg=s/n;
	printf("The avg waiting time: %f",avg); //printing the avg waiting time.
	//--------------------------------------------------------------------





	//TURN AROUND TIME CALCULATION

	//changing value of 's' as it might show garbage afterwards coz we gonna use it again to add all the turn around times of each processes.
	s=0;


	//initializing the turn around time of the first process with the burst time of the first process, as its the first process.
	tat[0]=arr[0];

	//Turn around time of the second one is the turn around time of the first one + the burst time of the second one, so on and so forth.
	for(int i=1;i<n;i++)
		tat[i]=tat[i-1]+arr[i];

	for(int i=0;i<n;i++)
		s+=tat[i];
	avg=s/n;
	printf("\navg turn around time: %f",avg);
	//-------------------------------------------------------------------------



	return 0;
}
