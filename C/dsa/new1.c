#include <stdio.h>
#define N 5

int safe_hai_to(int board[][N], int row, int coloumn);
int n_queen(int board[][N], int row);
int main()
{
    int mat[N][N], i, j;
    for (i = 0; i < N; i++)
    {
        for ( j = 0; j < N; j++)
            mat[i][j] = 0;
    }

    n_queen(mat, 0);

    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
    return 0;
}

// NQueen Function

int n_queen(int board[][N], int row)
{
    for (int col = 0; col <= N - 1; col++)
    {
        board[row][col] = 1;
        if (row < N - 1)
        {
            if (safe_hai_to(board, row, col) == 1 && n_queen(board, row + 1) == 1)
            {
                return 1;
            }
            else
            {
                board[row][col] = 0;
            }
        }
        else if (row == N - 1)
        {
            if (safe_hai_to(board, row, col) == 1)
                return 1;
            else
                board[row][col] = 0;
        }
    }
    return 0;
}

// safe_hai_to function

int safe_hai_to(int board[][N], int row, int col)
{
    for (int i = 0; i < row; i++)
    {

        if (board[i][col] == 1) //(i,2)
            return 0;
    }
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
    {

        if (board[i][j] == 1)
            return 0;
    }
    for (int i = row - 1, j = col + 1; i >= 0 && j < N; i--, j++)
    {

        if (board[i][j] == 1)
            return 0;
    }
    return 1;
}