#include <stdio.h>
int N;

// checking func
int check(int a[][N], int row, int col)
{
	for (int i = 0; i < row; i++)
    {
        if (a[i][col] == 1)
            return 0;
    }
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
    {
        if (a[i][j] == 1)
            return 0;
    }
    for (int i = row - 1, j = col + 1; i >= 0 && j < N; i--, j++)
    {
        if (a[i][j] == 1)
            return 0;
    }
    return 1;
}

// queen func
int nqueens(int a[][N], int i)
{
	int j;
	for (j = 0; j < N - 1; j++)
	{
		a[i][j]=1;
		if (i < N - 1)
		{
			if (check(a, i, j) == 1 && nqueens(a, i + 1) == 1)
				return 1;
			else
				a[i][j] = 0;
		}
		else if (i == N - 1)
		{
			if (check(a, i, j) == 1)
				return 1;
			else
				a[i][j] = 0;
		}
	}
	return 0;
}

int main()
{
	int a[N][N],i,j;
	printf("Enter no.of queens to be placed: ");
	scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
            a[i][j] = 0;
    }
    nqueens(a, 0);
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
	return 0;
}