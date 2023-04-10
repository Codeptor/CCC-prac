//resizing an array
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i, N, *arr;
    scanf("%d", &N);
    arr = (int*) malloc(N * sizeof(int));
    for(i = 0; i < N; i++)
    {
        scanf("%d", arr + i);
    }
    scanf("%d", &N);
    arr = (int*) realloc(arr, N * sizeof(int));
    for(i = 0; i < N; i++)
    {
        scanf("%d", arr + i);
    }
    for(i = 0; i < N; i++)
    {
        printf("%d ", *(arr + i));
        
    }
    return 0;
}