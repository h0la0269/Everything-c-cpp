#include <stdio.h>
#include <stdlib.h>

typedef struct block{
    int data;
    struct block *next;
}node;



void main()
{
	int choice;
	int val;
	node *head = NULL;
	while (1)
	{

		printf("\nLINKED LIST\n\n");
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
			int af_pos;
			printf("\nEnter after which element you want to  insert an element: ");
			scanf("%d", &af_pos);
			insafter();
			break;

		case 4:
			printf("\nDeting the first node");
			delbeg(&head);
			break;

		case 5:
			int af_pos;
			printf("\nEnter after which you want to delete node: ");
			scanf("%d", &af_pos);
			search_by_pos(&head, af_pos);
			delafter();
			break;

		case 6:
			printf("\nReversed the node\n");
			reverse(&head);
			break;

		case 7:
			printf("\nTraversing the list\n");
			traverse(&head);
			break;

		default:
			printf("\nINVALID INPUT. TRY AGAIN\n");
			break;
		}
	}
}
