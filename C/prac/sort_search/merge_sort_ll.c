#include <stdio.h>
#include <stdlib.h>

typedef struct block
{
	int data;
	struct block *next;
}node;



void append(node **s, int val){
	node *ptr;
	node *tmp=(node *)malloc(sizeof(node));
	tmp->data=val;
	tmp->next=*s;
	if(*s==NULL)
		*s=tmp;
	else{
		ptr=*s;
		while(ptr->next!=*s)
			ptr=ptr->next;
		ptr->next=tmp;
	}
		
}

void print_list(node* ptr){
	while(ptr->next!=NULL){
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
}

int main(){
	int *arr,n;
	node *s=NULL;
	printf("Enter no.of elements to be sorted: ");
	scanf("%d",&n);
	arr=(int *)malloc(n*sizeof(int));
	printf("Enter the elements: ");
	for(int i=0;i<n;++i)
		scanf ("%d",&arr[i]);
	mergesort(&s);
	return 0;
}