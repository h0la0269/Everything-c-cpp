#include<stdio.h>
#include<stdlib.h>

#define n 100
#define ITEM char

typedef struct {
	int tos;
	ITEM arr[n];
}stack;

void init(stack *ptr)
{
	ptr->tos=-1;
}
int isEmpty(stack *ptr)
{
	if(ptr->tos==-1) 
        return 1;
	else 
        return 0;
}

int isFull(stack *ptr){
	if (ptr->tos==n-1)
        return 1;
	else 
        return 0;
}

void push(stack *ptr, ITEM val){
	if(!isFull(ptr))
    {
        ptr->tos++;
        ptr->arr[ptr->tos]=val;
    }
		
	else return;
}

ITEM pop (stack *ptr){
	if(isEmpty(ptr)==1)
		return 0;
	ITEM tmp;
	tmp=ptr->arr[ptr->tos];
	ptr->tos--;
	return tmp;
}

int check(FILE *fptr, stack *s){
	ITEM ch;
	fptr=fopen("file_to_read.txt", "r");
	while(ch=fgetc(fptr) != EOF){
		if (ch=='(' || ch=='{' || ch=='[')
			push(s, ch);
		while(!isEmpty(s)){
			char tmp;
			tmp=pop(s);
			if((ch==')' && tmp=='(') || (ch=='}' && tmp=='{' )|| (ch==']' && tmp=='['))
				break;
			else
				return 0;
		}
		if(isEmpty(s))
			return 1;
		else
			return 0;
	}
}

void main(){
	FILE * fptr;
	stack *s;
	int chk;
	chk=check(fptr, s);
	(chk==0)? printf("Not properly parenthesized.\n\n") : printf("Proper Parenthesis found.\n\n");
}