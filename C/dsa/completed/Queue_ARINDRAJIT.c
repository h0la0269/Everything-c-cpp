#include <stdio.h>
#define item int
#define s 4
int q[s], f=-1, r=-1;

int isfull()
{
    if (r==s-1) return 1;
    else return 0;
}

int isempty()
{
    if (f==-1) return 1;
    else return 0;
}

int enqueue(item data)
{
    if (isfull()==1) return 0;
    else
    {
        if (isempty()==1) 
        {
            f=r=0;
            q[f]=data;
        }
        else    q[++r]=data;
        return 1;
    }
}

int dequeue()
{
    if (isempty()==1) return 0;
    else
    {
        int tmp;
        if (f==r)
        {
            tmp=q[f];
            f=r=-1;
        }
        else tmp=q[f++];
        return tmp;
    }
}

void display()
{
	int i;
	if (f==-1) printf("The queue is empty!!!\n\n");
	else
	{
		printf("%d <-- First\n",q[f]);
		for (i=f+1;i<=r;i++)	printf("%d\n",q[i]);
        printf("\n");
    }
}

void main()
{
    int ch, x, data;
    while (1)
    {
        printf("Type 1 to enqueue\n");
        printf("Type 2 to dequeue\n");
        printf("Type 3 to check if queue is full\n");
        printf("Type 4 to check if queue is empty\n");
        printf("Type 5 to display the queue\n");
        printf("Type 6 to exit\n\n");
        printf("Enter your choice:  ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("Enter the data: ");
                scanf("%d",&data);
                if (enqueue(data)==0)
                {
                    printf("The queue is full!!!\n\n");
                }
                else
                {
                    printf("%d is successfully enqueued!!!\n\n",data);
                }
                break;
            case 2:
                x=dequeue();
                if (x==0) 
                {
                    printf("The queue is empty!!!\n\n");
                }
                else
                {
                    printf("%d is dequeued from the queue!!!\n\n",x);
                }
                break;
            case 3:
                if (isfull()==1) 
                {
                    printf("The queue is full!!!\n\n");
                }
                else 
                {
                    printf("The queue is not full!!!\n\n");
                }
                break;
            case 4:
                if (isempty()==1) 
                {   
                    printf("The queue is empty!!!\n\n");
                }
                else 
                {
                    printf("The queue is not empty!!!\n\n");
                }
                break;
            case 5:
                display();break;
            case 6: 
                return 0;break;
            default:
                printf("Invalid Choice!!!\n\n");break;
        }
    }
}