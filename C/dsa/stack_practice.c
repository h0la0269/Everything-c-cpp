#include<limits.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct Stack{
    int top;
    unsigned capacity;
    int* array;
};

int INIT (struct Stack* stack, unsigned capacity){
    stack->capacity = capacity;
    stack->top = -1;
    stack->array = (int*)malloc(stack->capacity * sizeof(int));

}

int isFull (struct Stack* stack){
    return stack->top == stack->capacity - 1;
}

int isEmpty (struct Stack* stack){
    return stack->top == -1;
}

int push (struct Stack* stack, int item){
    if (isFull(stack)){
        return 0;
    }
    stack->array[++stack->top] = item;
    printf("%d Pushed to stack\n",item);
}

int pop (struct Stack* stack){
    if (isEmpty(stack)){
        return 0;
    }
    return stack->array[stack->top--];
}

int peek (struct Stack* stack){
    if (isEmpty(stack)){
        return 0;
    }
    return stack->array[stack->top];
}

int choiceMenu(choice){
    printf("1.For pushing into the stack\n2.For poping from the stack\n3.To peek from the stack");
    printf("Enter your choice : ");
    scanf("%d", &choice);

    if (choice==1){
        return push(stack);
    }

    else if (choice==2){
        return pop(stack);
    }

    else if (choice==3){
        return peek(stack);
    }

    else{
        return 0;
    }
}

int main(){

    struct Stack* stack = INIT(100);

    int choiceMenu(choice);

    push(stack, 20);
    push(stack, 50);
    push(stack, 10);
    push(stack, 40);

    printf("%d Popped from the stack", pop(stack));
    printf("%d Peeked from the stack", peek(stack));

    return 0;
}