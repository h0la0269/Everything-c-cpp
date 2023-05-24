#include <stdio.h>
#include <stdlib.h>
#define ITEM int
#define N 200

typedef struct {
      ITEM data, arr[N];
      int front, rear;
}q;

void init(q *front, q* rear){
      front=rear=-1;
}

int isfull(q *ptr,int size){
      if(ptr->front==0 && ptr->rear==size-1)return 1;
      else return 0;
}

int isempty(q *ptr){
      if(ptr->front==ptr->rear==-1)
            return 1;
      else  
            return 0;

}

int dequeue(q *ptr, int size){
      int tmp;
      if(isempty(ptr)==1)
            return;
      else{
            tmp=ptr->arr[ptr->front];
            ptr->front++;
      }
      return tmp;
}

int enqueue(q *ptr,int size, int val){
      if(isfull(ptr,size)==1)
            return;
      else{
                  if(ptr->front==-1)
                        ptr->front=0;
                  ++ptr->rear;
                  ptr->arr[ptr->rear]=val;
      }
}

