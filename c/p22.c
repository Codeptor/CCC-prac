//pointer to an array
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void replace(double* pointer, int arr_size)
{
    int i;
    for(i = 0; i < arr_size; i++)
    {
        if(*(pointer + i) < 0)
        {
            *(pointer + i) = 0;
        }
    }
}	
int main()
{
    int i;
    double arr[5];
    for (i= 0; i < 5; i++) scanf("%lf", &arr[i]);
    double* pointer = arr;
    replace(pointer, 5);
    
    for (i = 0; i < 5; i++) printf("%lf ", *(pointer + i));
    return 0;
}