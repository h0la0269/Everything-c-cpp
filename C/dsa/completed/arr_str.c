#include <stdio.h>
#include <stdlib.h>

// MACRO DEFINITIONS
#define ITEM int
#define N 10
typedef struct 
{
    int tos;
    ITEM arr[N];
} stack;

// functions
void init(stack *);
int isempty(stack *);
int isfull(stack *);
int pop(stack *);
void push(stack *, int);
int peek(stack *);
int main()
{
    stack p;
    int choice, s, f, z, inp;
    ITEM d;
    while (1)
    {
        printf("\n1. To initialize a stack");
        printf("\n2. If stack is empty or not");
        printf("\n3. If stack is full or not");
        printf("\n4. For Peek");
        printf("\n5. For Push");
        printf("\n6. For Pop");
        printf("\n7. To exit this program");
        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            init(&p);
            printf("The stack has been initalized.\n");
            break;

        case 2:
            s = isempty(&p);
            if (s == 1)
                printf("Stack is empty");
            else
                printf("Stack is not empty");
            break;

        case 3:
            f = isfull(&p);
            if (f == 1)
                printf("Stack is full");
            else
                printf("Stack is not full");
            break;

        case 4:
            z = peek(&p);
            break;

        case 5:
            printf("Enter the input: ");
            scanf("%d", &inp);
            push(&p, inp);
            break;
        case 7:
            return 0;
        default:
            break;
        }
    }
    return 0;
}

void init(stack *p)
{
    p->tos = -1;
}

int isempty(stack *ar)
{
    if (ar->tos == -1)
        return 1;
    else
        return 0;
}

int isfull(stack *f)
{
    if (f->tos == N - 1)
        return 1;
    else
        return 0;
}

int peek(stack *x)
{
    return x->arr[x->tos];
}

int pop(stack *q)
{
    int tmp;
    if (isempty(q) == 1)
        return 0;
    tmp = q->arr[q->tos];
    q->tos--;
    return tmp;
}

void push(stack *r,int ip)
{
    if (isfull(r) == 1)
        return;
    else
    {
        r->tos++;
        r->arr[r->tos] = ip;
    }
}