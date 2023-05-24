#include<stdio.h>
#include<stdlib.h>
#define N 4
int check(int a[][N],int row,int col)//(1,2)
{
    int i,j;
    for(i=0;i<N;i++)//for columns
    {
        if(a[i][col] == 1||a[row][i] == 1) //(0,2) --- (1,0)
            return 0;
    }
    for(i=0,j=0;i<N,j<N;i++,j++)//for diagonals
    {
        if(row-col == i-j)
        {
            if(a[i][j]==1)
                return 0;
        }
        if(row+col == i+j)
        {
            if(a[i][j] == 1)
                return 0;
        }
    }


    return 1;
}
int nqueens(int a[][N],int i)
{
    int j;
    for (int j = 0; j < N; j++)
    {
        if (check(a, i, j))
        {
            a[i][j] = 1;
            if (nqueens(a,i+1))
                return 1;
            if(i==N-1)
                return 1;
            a[i][j] = 0;
        }
    }
    return 0;
}
int main()
{
    int a[N][N];
    int i,j;

    for(i=0;i<N;i++)
    {
        for(j=0;j<N;j++)
            a[i][j]=0;
    }

    nqueens(a,0);

    for(i=0;i<N;i++)//printing the matrix
    {
        for(j=0;j<N;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }


    return 0;

}