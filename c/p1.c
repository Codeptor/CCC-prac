#include<stdio.h>
int main()
{   
    float x,y;
    printf("Enter the value of x: ");
    scanf("%f",&x);
    printf("Enter the value of y: ");
    scanf("%f",&y);

    if(x>0 && y>0)
    {
        printf("first quadrant");
    }
    else if(x<0 && y>0)
    {
        printf("second quadrant");
    }
    else if(x<0 && y<0)
    {
        printf("third quadrant");
    }
    else if(x>0 && y<0)
    {
        printf("fourth quadrant");
    }
    
    return 0;
}