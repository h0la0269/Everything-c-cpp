#include <stdio.h>
#define ITEM int
#define N 10
typedef struct
{
    ITEM data, arr[N];
    int front, rear;
} queue;

void init(queue *front, queue *rear)
{
    front = -1;
    rear = -1;
}

int isfull(queue *front, queue *rear, int size)
{
    if (front == 0 && rear == size - 1)
        return 1;
    else
        return 0;
}

int isempty(queue *front, queue *rear, int size)
{
    if (front == rear == -1)
        return 1;
    else
        return 0;
}

// queue operations
int dqueue(queue *ptr)
{
    int tmp;
    if (isempty(ptr == 1))
        return;
    else
    {
        tmp=ptr->arr[ptr->front];

    }
}

int main()
{
    ITEM *ptr;
    int n;
    printf("Enter the length of the queue: ");
    scanf("%d", &n);
    ptr = (ITEM *)malloc(n * sizeof(ITEM));

    return 0;
}
