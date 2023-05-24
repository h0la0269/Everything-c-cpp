#include<stdio.h>
int sort(int arr[]);
int insert(int r[]);
int delete(int array[]);
void search(int num[]);

int main (){
    int arr[5],c,i;
    printf("Enter a number: \n");
    for(i=0;i<5;i++)
        scanf("%d", &arr[i]);
    printf("Enter a choice-\n\n");
    printf("1: Sorting\n2: Searching\n3: Deletion\n4: Insertion\n\nYour Option: ");
    scanf("%d", &c);
    switch(c)
    {
        case 1:
            sort(arr);
            printf("The sorted array is: \n");
            for(i=0;i<5;i++)
                printf("%d\n",arr[i]);
            break;

        case 2:
            search(arr);
            break;

        case 3:
            delete(arr);
            break;

        case 4:
            (arr);
            break;

        default: 
            printf("INVALID INPUT\n");
    }
    return 0;
}

//Sorting

int sort(int num[])
{
    int i,j,a;
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(num[i]>num[j])
            {
                a=num[i];
                num[i]=num[j];
                num[j]=a;
            }
        }
    }
    return num[5];
}

//Search

void search(int num[])
{
    int i,n;
    printf("Enter a number to search");
    scanf("%d",&n);
    for(i=0;i<5;i++)
    {
        if (num[i]==n)
            printf("The number %d is the %d element", n,i+1);
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