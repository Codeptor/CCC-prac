//pointers using malloc
#include<stdio.h>
#include<string.h>
#include<stdlib.h> //this library contains the function malloc.
int main()
{
	int *var = (int*) malloc(sizeof(int));
    *var = 10;
    scanf("%d" , var);
    printf("%d" , *var);
    return 0;   
}