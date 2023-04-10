//array using pointers
#include<stdio.h>
#include<string.h>
#include<stdlib.h> //this library contains the function malloc.
int main()
{
	int i, N, sum = 0;
	scanf("%d", &N);
    int *var = (int*) malloc(N * sizeof(int));
    for(i = 0; i < N; i++)
    {
        scanf("%d", var + i);
        sum += *(var + i);
    }
    printf("%d", sum);
    return 0;
}