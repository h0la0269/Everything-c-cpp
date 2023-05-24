#include<stdio.h>
#include<stdlib.h>
#define N 30
typedef struct 
{
	int tos;
	int arr[N];
}stack;

void init(stack *ptr){
	ptr->tos=-1;
}

int isEmpty(stack *p){
	if(p->tos==-1)
		return 1;
	else
		return 0;
}

int isFull(stack *p){
	if(p->tos==N-1)
		return 1;
	else
		return 0;
}

void push(stack *p, int val){
	if(isFull(p)==0){
		p->arr[p->tos++]=val;
	}
	else return;
}

int pop(stack *p){
	if(isEmpty(p)==1)
		return 0;
	int tmp;
	tmp=p->arr[p->tos];
	p->tos--;
	return tmp;
}

int peek(stack *p){
	return p->arr[p->tos];
}

int main(){
	stack *s;
	init(&s);
	push(&s, 10);
	return 0;
}