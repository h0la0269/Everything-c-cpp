#include <stdio.h>
#include <stdlib.h>



typedef struct block
{
      int data;
      struct block *next;
} node;

void append(node **head, int val)
{
      node *ptr=*head;
      node *tmp = (node *)malloc(sizeof(node));
      tmp->data = val;
      tmp->next = NULL;
      if (*head == NULL)
            *head = tmp;
      else
      {
            while (ptr->next != NULL)
                  ptr = ptr->next;
      }
      ptr->next = tmp;
      printf("%d",tmp->data);
}


void func(node *h, node **h1, node **h2)
{
      node *ptr;
      ptr=h;
      while (ptr->next != NULL)
      {
            if (ptr->data % 2 == 0)
                  append(h2, ptr->data);
            else
                  append(h1, ptr->data);
            ptr=ptr->next;
      }
}

void traverse(node *ptr)
{
	while (ptr != NULL)
	{
		printf("%d ", ptr->data);
		ptr = ptr->next;
	}
}


int main ()
{
      node  *h=NULL, *h1=NULL, *h2=NULL;
      for(int i=1;i<=10;i++){
            append(&h, i);
      }
      func(h, &h1, &h2);
      traverse(h1);
      printf("\n");
      traverse(h2);
      return 0;
}