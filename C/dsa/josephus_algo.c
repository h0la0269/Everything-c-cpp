#include <stdio.h>
#include <stdlib.h>

typedef struct
{
      struct block *next;
} node;

node* josephus(node *ptr, int pos){
      while(ptr->next !=ptr){
            for(int i=1;i<pos-1;i++)
                  ptr=ptr->next;
            node *tmp=ptr->next;
            ptr->next=tmp->next;
            free(tmp);
            ptr=ptr->next;
      }
      return ptr;
}

int main (){
      int val;
      int *rem;
      node *head=NULL;
      printf("Enter the position gap: ");
      scanf("%d",&val);
      rem=josephus(head,val);
      printf("%d is choosen.",&rem);
      return 0;
}