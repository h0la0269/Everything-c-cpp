#include <iostream>
#include <stdlib.h>
using namespace std;
#define max 100
typedef struct stack{
	int top;
	int arr[max];
}st;

void createEmptyStack(st *s){
	s->top=-1;
}

int isEmpty(st *s){
	if(s->top == -1)
		return 1;
	else
		return 0;
}

int isFull(st *s){
	if(s->top == max -1)
		return 1;
	else return 0;
}

void push(st *s	,int val){
	if(!isFull(s)){
		s->top++;
		s->arr[s->top]= val;
	}
	else cout << "Stack is Full cant push!!!"<< endl;
}

void pop(st *s){
	if(!isEmpty(s)){
		cout << "The popped out item is= "<< s->arr[s->top] << endl;
		s->top--;
	}
	else cout << "Stack is empty cant pop!!!" << endl;
}
int main(){
	st *s = (st *)malloc(sizeof(st));
	createEmptyStack(s);
	push(s, 10);
	push(s, 11);
	push(s, 12);
	push(s, 13);
	
	pop(s);
	pop(s);

	while (!isEmpty(s)){
		pop(s);
	}


	return 0;
}