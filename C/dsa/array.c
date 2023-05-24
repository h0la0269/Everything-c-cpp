#include<stdio.h>
int insert(int r[]);
int delete(int array[]);
int search(int *, int, int, int);
void show(int *, int);
void sort(int *, int);

int main (){
    int arr[100];
    int n, c, i, srch, pos;
    printf("Enter the range of arrays: \n");
    scanf("%d", &n);
    printf("Enter the array:\n");
    for(i=0;i<n;i++)
        scanf("%d", &arr[i]);
    
    printf("Enter a choice-\n\n");
    printf("1: Sorting\n2: Searching\n3: Deletion\n4: Insertion\n\nYour Option: ");
    scanf("%d", &c);
    switch(c)
    {
        case 1:
        	printf("The sorted array is: \n");
            sort(arr, n);
            break;

       	case 2:
       		printf("Search for a number\n");
        	printf("Enter a number to search: ");
        	scanf("%d", &srch);
            pos=search(arr,n,srch,-1);
            if(pos==-1)
            	printf("Not Found");
            else
            	printf("The position if %d is %d", srch, pos);
            break;

        /*case 3:
            delete(arr);
            break;

        case 4:
            (arr);
            break;*/

        default: 
            printf("INVALID INPUT\n");
    }
    return 0;
}

//Sorting

void sort(int *num, int n)
{
    int i,j,a;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(num[i]>num[j])
            {
                a=num[i];
                num[i]=num[j];
                num[j]=a;
            }
        }
    }
    show(num, n);
}

//Search

int search(int *arr,int n, int p, int a)
{
    for(int i=0;i<n;i++){
    	if(arr[i]==p){
    		a=i;
    		return a;
    	}
    	else
    		return -1;
    }
}

//Deletion

int delete(int array[])
{
    int n,i;
    printf("Enter the position whose value you want to delete?\n->");
    scanf("%d",&n);
    if(n>=6){
	printf("Can't delete\n");
    }
    else{
	for(i=n-1;i<4;i++)
	    array[i]=array[i+1];
    	printf("The final array is: \n");
	for (i=0;i<4;i++)
	    printf("%d\n", array[i]);
    }
}

//Inserting

int insert(int r[]){
    
}



//final array printing
void show(int *arr, int n){
	for(int i=0;i<n;i++)
		printf("%d\n",arr[i]);
}
