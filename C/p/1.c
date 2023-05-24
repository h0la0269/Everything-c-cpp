//1. Write a C program to add the digits of a positive integer repeatedly until the result has a single digit.
#include <stdio.h>
int main()
{
    int n,t,remainder,s;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (n<0) 
        printf("Not a positive number.",n);
    else{
        t=n;
        while (t>9){
            s=0;
            while (t!=0){
                remainder=t%10;
                t=t/10;
                s+=remainder;
            }
            t=s;//t=14;
        }
        printf("Number is: %d",t);
    }
    return 0;
}