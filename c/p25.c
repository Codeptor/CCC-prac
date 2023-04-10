#include <stdio.h>
#include <math.h>

void replace(double* pointer, int arr_size)
{
    int i;
    for(i = 0; i < arr_size; i++)
    {
        *(pointer + i) = sqrt(*(pointer + i));
    }
}  

int main()
{
    int i;
    double arr[5];
    for (i = 0; i < 5; i++) scanf("%lf", &arr[i]);
    double* pointer = arr;
    replace(pointer, 5);
    
    for (i = 0; i < 5; i++) printf("%.4lf ", *(pointer + i));
    return 0;
}
