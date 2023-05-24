#include <stdio.h>
#include <stdlib.h>
#define S 5

int front = -1;
int rear = -1;

void enqueue(int que[],int val){
    if ((front == 0 && rear == S-1) || (front == rear + 1)){
        printf("Queue is full\n");
        return;
    }

    else if(rear == -1){
        front = 0;
        rear = 0;
    }

    else{
        rear++;
        rear = rear % S;
    }
    que[rear] = val;
}

void dequeue(int que[]){
    if (front == -1)
        printf("Queue is empty\n");

    else if(front == rear){
        printf("%d is deleted\n",que[front]);
        front = -1;
        rear = -1;
    }

    else{
        printf("%d is deleted\n",que[front]);
        front++;
        front = front % S;
    }
}

void display(int que[]){
    int i = front;
    while (i!=rear){
        printf("%d-->",que[i]);
        i++;
        i = i % S;
    }
    printf("%d",que[i]);
}

int main(){
    int ch,val,que[S];

    do{
        printf("\n1 for enqueue\n2 for dequeue\n3 for display\n4 for exit\nEnter your choice : ");
        scanf("%d",&ch);

        switch(ch){
            case 1:
            printf("Enter a number : ");
            scanf("%d",&val);
            enqueue(que,val);
            break;

            case 2:
            dequeue(que);
            break;

            case 3:
            display(que);
            break;
        }
    }while(ch!=4);
}