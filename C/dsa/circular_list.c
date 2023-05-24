#include <stdio.h>
#include <stdlib.h>

#define ITEM int
typedef struct block
{
      struct block *next;
      ITEM DATA;
} node;

void enqueue(node **ptrear, int val)
{
      node *tmp = (node *)malloc(sizeof(node));
      tmp->DATA = val;
      if (*ptrear == NULL)
            tmp->next = tmp; // if atleast one node is present
      else
      {
            tmp->next = (*ptrear)->next;
            (*ptrear)->next = tmp;
      }
      *ptrear = tmp;
}

int dequeue(node **ptrear)
{
      int  val;
      if (*ptrear != NULL)
            return;
      else
      {
            val=(*ptrear)->next->DATA;
            node *tmp=(*ptrear)->next;
            if((*ptrear)->next==*ptrear)
                  *ptrear=NULL;
            else
                  (*ptrear)->next=tmp->next;
            free(tmp);
            return val;
      }
}

void traverse(node *ptr){
      while(ptr!=ptr->next){
            printf("%d",&ptr->DATA);
            ptr=ptr->next;
      }
      printf("%d",&ptr->DATA);
}

