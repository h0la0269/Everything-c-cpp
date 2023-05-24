#include<stdio.h>
int fibo(int n,int x, int y){
      if(n==1)
            return x;
      else if(n==2)
            return y;
      else
            return fibo(n-1,y,x+y);
}

int main(){
      fibo(3,0,1);
      printf("%d ",fibo);
      return 0;
}