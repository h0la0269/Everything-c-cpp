#include <stdio.h>
#define s 5
#define item int

int q[s], f=-1, r=-1;

int isfull()
{
      if (r == s - 1)
            return 1;
      else
            return 0;
}

int isempty()
{
      if (f == -1)
            return 1;
      else
            return 0;
}

void enqueue(item data)
{
      if (isfull() == 1)
            return;
      else
            q[r++] = data;
}

int dequeue()
{
      if (isempty() == 1)
            return 0;
      else
      {     
            int tmp;
            if (f == r)
            {
                  tmp = q[f];
                  f=r=-1;
            }
            else
                  tmp=q[f++];
            return tmp;
      }
}

int main(){
      int choice,inp;
      printf("QUEUE\n\n");
      while(1){
            printf("1: IS EMPTY\n2: INSERTING THE QUEUE\n3: IS FULL\n4: DELETING FROM A QUEUE\n5: EXIT\n\nENTER YOUR CHOICE: ");
            scanf("%d",&choice);
            switch(choice)
            {
                  case  1:
                        isempty();
                        (isempty()==1)? printf("\nQueue is empty\n") :printf("\nQueue isn't empty\n");
                        break;
                  case 2:
                        printf("\nEnter value to be inserted: ");
                        scanf("%d",&inp);
                        enqueue(inp);
                        break;
                  case 3:
                        isfull();
                        (isfull()==1)? printf("\nQueue is full\n") :printf("\nQueue isn't full\n");
                        break;
                  case 4:
                        int x;
                        x=dequeue();
                        printf("\n%d is deleted from the queue\n",x);
                        break;
                  case 5:
                        return 0;
                        break;
                  default:
                        printf("\nEnter valid input \n");
                        break;
            }
      }
      return 0;
}
