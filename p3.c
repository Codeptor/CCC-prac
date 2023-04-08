#include<stdio.h>
int main()
{
    
    int x;
    printf("enter age: ");
    scanf("%d",&x);

    if (x>10)
    {
        printf("100 rupees");
    }
    else if (x>=10 && x<40)
    {
        printf("150 rupees");
    }
    else if (x>=40 && x<=120)
    {
        printf("200 rupees");
    }
    return 0;
}