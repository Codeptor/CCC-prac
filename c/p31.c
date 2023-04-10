//check leap year or not
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char** leapyears (int arr[], int size)
{
    int i, j, k, count = 0;
    char **arr1 = (char**) malloc(size * sizeof(char*));
    for(i = 0; i < size; i++)
    {
        arr1[i] = (char*) malloc(5 * sizeof(char));
    }
    for(i = 0; i < size; i++)
    {
        if(arr[i] % 4 == 0)
        {
            if(arr[i] % 100 == 0)
            {
                if(arr[i] % 400 == 0)
                {
                    sprintf(arr1[count], "%d", arr[i]);
                    count++;
                }
            }
            else
            {
                sprintf(arr1[count], "%d", arr[i]);
                count++;
            }
        }
    }
    return arr1;
}
int main()
{
    int i, N, *arr;
    scanf("%d", &N);
    arr = (int*) malloc(N * sizeof(int));
    for(i = 0; i < N; i++)
    {
        scanf("%d", arr + i);
    }
    char **arr1 = leapyears(arr, N);
    for(i = 0; i < N; i++)
    {
        printf("%s ", arr1[i]);
    }
    return 0;
}
