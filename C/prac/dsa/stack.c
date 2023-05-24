#include <stdio.h>
#include <stdlib.h>
#define N 100

typedef struct 
{
	int TOS;
	int arr[N];
}stack;


void init(stack *p){
	p->TOS=-1;
}

int isEmpty(stack	*p){
	if(p->TOS==-1)
		return 1;
	else
		return 0;
}

int isFull(stack *p){
	if(p->TOS==N-1)
		return 1;
	else
		return 0;
}

void push(stack *p, int val){
	if(isFull(p)==1)
		return;
	p->TOS++;
	p->arr[p->TOS]=val;
}

int pop(stack *p){
	
	if(isEmpty(p)==1){
		return 0;
	}
	int tmp;
	tmp=p->arr[p->TOS];
	p->TOS--;
	return tmp;
}

int main(){
	stack s;
	init(&s);
	push(&s, 10);
	printf("%d",pop(&s));
	return 0;
}