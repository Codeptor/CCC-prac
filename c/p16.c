//find transpose of a matrix
#include<stdio.h>
int main()
{
	int i, j,  N;
	scanf("%d", &N);
	int matrix[N][N], transpose[N][N];
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            transpose[j][i] = matrix[i][j];
        }
    }
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
    return 0;
}
