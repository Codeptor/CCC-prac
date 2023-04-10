//program that accepts an NxM matrix as input and prints its transpose.
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int i,j,N,M;
    scanf("%d %d",&N,&M);
    int matrix[N][M],transpose[M][N];
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }
    for(i=0;i<N;i++)
    {
        for(j=0;j<M;j++)
        {
            transpose[j][i]=matrix[i][j];
        }
    }
    for(i=0;i<M;i++)
    {
        for(j=0;j<N;j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
 
}