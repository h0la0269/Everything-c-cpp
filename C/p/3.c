// //3.Write a C program to find out the sum of all odd digits of a positive integer.
// #include<stdio.h>
// int main(){ 
// 	int a,n,s=0;
// 	printf("Enter a noob");
// 	scanf("%d", &n);
// 	while(n!=0){
// 		a=n%10;
// 		if(a%2!=0)
// 			s+=a;//s=s+a;
// 		n=n/10;
// 	}
// 	printf("The sum of odd digits: %d",s);
// 	return 0;
// }


#include <stdio.h>

void shellSort(int array[], int n)//n=65 0 to n-1
{

    for (int gap = n / 2; gap > 0; gap /= 2)
    {
        for (int i = gap; i < n; i += 1)
        {
            int temp = array[i];
            
            for (int j = i; j >= gap && array[j - gap] > temp; j -= gap)
            {
                array[j] = array[j - gap];
            }
            array[j] = temp;
        }
    }
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%d  ", array[i]);
    }
    printf("\n");
}

int main()
{
    int arr[30];
    int k,  num;
    printf("Enter total no. of elements : ");
    scanf("%d", &num);//6
    printf("\nEnter %d numbers: ", num);
 
    for (k =  0 ; k < num; k++)
    {
        scanf("%d", &arr[k]);
    }
    shellSort(arr, num);//6
    printf("\n Sorted array is: ");
    for (k = 0; k < num; k++)
        printf("%d ", arr[k]);
    return 0;
}