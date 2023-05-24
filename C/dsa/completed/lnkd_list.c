#include <stdio.h>
#include <stdlib.h>
#define ITEM int

typedef struct block
{
	ITEM DATA;
	struct block *next;
} node;

void addbegin(node **ptrhead, int val)
{
	node *ptr;
	ptr = (node *)malloc(sizeof(node));
	ptr->DATA = val;
	ptr->next = *ptrhead;
	*ptrhead = ptr;
}

void traverse(node *ptr)
{
	while (ptr != NULL)
	{
		printf("%d ", ptr->DATA);
		ptr = ptr->next;
	}
}

void append(node **ptrhead, int val)
{
	node *ptr;
	node *tmp = (node *)malloc(sizeof(node));
	tmp->DATA = val;
	tmp->next = NULL;
	if (*ptrhead == NULL)
		*ptrhead = tmp;
	else
	{
		ptr = *ptrhead;
		while (ptr->next != NULL)
			ptr = ptr->next;
		ptr->next = tmp;
	}
}

node *search_by_pos(node *ptrhead, int pos)
{
	if(ptrhead==NULL)
		return NULL;
	if (pos<=0){
		printf("\nInvalid position\n");
		return NULL;
	}

	for(int i=1;i<pos;i++){
		ptrhead=ptrhead->next;
	}
	return ptrhead;
}

void insafter(node *ptr, int val)
{	
    	if(ptr==NULL)
    	    return;
	node *tmp = (node *)malloc(sizeof(node));
	tmp->DATA = val;
	tmp->next = ptr->next;
	ptr->next = tmp;
}

void delafter(node *ptr)
{
	// node *tmp=(node *) malloc(sizeof(node));
	if (ptr == NULL)
		return;
	node *tmp = ptr->next;
	ptr->next = tmp->next;
	free(tmp);
}

void delbeg(node **ptrhead)
{
	if (*ptrhead == NULL)
		return;
	node *tmp = (*ptrhead);
	*ptrhead = tmp->next;
	free(tmp);
}

void reverse(node **ptrhead)
{
	if (*ptrhead == NULL)
		return;
	node *prev = NULL;
	node *cur = *ptrhead;
    	node *succ=NULL;
	while (cur != NULL)
	{
		succ = cur->next;
		cur->next = prev;
		prev = cur;
		cur = succ;
	}
    	*ptrhead=prev;
}


void sorting(node **ptrhead){
	
}

void main()
{
	int choice;
	int val,af_pos;
	node *head = NULL;
	while (1)
	{

		printf("\n\nLINKED LIST\n\n");
		printf("1: Insert number at beginning\n");
		printf("2: insert at the end\n");
		printf("3: Insert after element\n");
		printf("4: Delete at the beginning\n");
		printf("5: Delete after element\n");
		printf("6: Reverse the list\n");
		printf("7: Traverse the list\n");
		printf("\nYour Choice: ");
		scanf("%d", &choice);

		switch (choice)
		{
		case 1:

			printf("\nEnter value to be added at the beginning: ");
			scanf("%d", &val);
			addbegin(&head, val);
			break;

		case 2:
			printf("\nEnter value to be added at the end: ");
			scanf("%d", &val);
			append(&head, val);
			break;

		case 3:
			printf("\nEnter after which element you want to  insert an element: ");
			scanf("%d", &af_pos);
			insafter(head,af_pos);
			break;

		case 4:
			printf("\nDeting the first node");
			delbeg(&head);
			break;

		case 5:
			printf("\nEnter after which you want to delete node: ");
			scanf("%d", &af_pos);
			search_by_pos(head, af_pos);
			delafter(head);
			break;

		case 6:
			printf("\nReversed the node\n");
			reverse(&head);
			break;

		case 7:
			printf("\nTraversing the list\n");
			traverse(head);
			break;

		default:
			printf("\nINVALID INPUT. TRY AGAIN\n");
			break;
		}
	}
}
