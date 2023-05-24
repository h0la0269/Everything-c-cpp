#include <stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct{
	char data[100];
	struct node *next;
	struct node *prev;
} node;


void addTrack(node *ptr){
	printf("Enter song name: ");
	gets(ptr->data);

}
int main()
{
	node *list;
	int choice, size=100;
	char a[size];
	while(1){
		printf("\n\nMUSIC PLAYER\n\n");
		printf("1: Check queue\n");
		printf("2: Add Track\n");
		printf("3: Delete Track\n");
		printf("4: Add after a track\n");
		printf("5: Delete a Track\n");
		printf("6: Next Track\n");
		printf("7: Previous Track\n");
		printf("8: Remove a Track\n");
		printf("8: Sort in Alphabetical Order\n\n");
		printf("9: Exit");
		printf("\nEnter Your Choice: ");
		scanf("%d", &choice);
		switch(choice){
			case 1:
				break;
			case 2: 
				addTrack(list);
				printf("\nTrack Added.\n");
				break;
			case 3: 
				break;
			case 4: 
				break;
			case 5: 
				break;
			case 6: 
				break;
		}
	}
	return 0;
}