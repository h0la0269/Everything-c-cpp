#include <stdio.h>
#include <stdlib.h>

typedef struct block
{
	int data;
	struct block *next;
}node;

void addbeg(node **ph, int val){
	node *ptr=(node *)malloc(sizeof(node));
	ptr->data=val;
	ptr->next=*ph;
	
}