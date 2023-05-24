#include <stdio.h>
// #include <stdlib.h>
#define N 100

typedef struct 
{
	int TOS;
	int arr[N];
}stack;


void init(stack *p){
	p->TOS=-1;
	// printf("initialized!\n");
}

int isEmpty(stack p){
	if(p.TOS==-1)
		return 1;
	else
		return 0;
}

int isFull(stack p){
	if(p.TOS=N-1)
		return 1;
	else
		return 0;
}

void push(stack *p, int val){
	if(isFull(*p)==1)
		return;
	p->TOS++;
	p->arr[p->TOS]=val;
	// printf("i'm running!\n");
}

int pop(stack *p){
	if(isEmpty(*p)==0){
		int tmp;
		tmp=p->arr[p->TOS];
		p->TOS--;
		// printf("i'm pop\n");
		return tmp;
	}
}

int main(){
	stack s;
	init(&s);
	push(&s, 10);
	int tmp=pop(&s);
	printf("%d\n", tmp);
	return 0;
}