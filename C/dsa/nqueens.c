#include <stdio.h>

int check(int a[][n], int i, int j){
    
}

int nqueens(int a[][n], int i){
    for (j=0;j<=n;j++){
        a[i][j] = 1;
        if (i<=n-1){
            if (check(a,i,j) == 1)&&(nqueens(a,i+1)==1){
                return 1;
            }

            else{
                a[i][j] = 0;
            }
        }

        else if (i == n-1){
            if(check(a,i,j) == 1){
                return 1;
            }

            else{
                a[i][j] = 0;
            }
        }
    }

    return 0;
}