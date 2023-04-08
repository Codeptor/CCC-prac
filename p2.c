#include<stdio.h>
int main()
{
    
    int x;
    printf("Enter the value of x: ");
    scanf("%d",&x);

    if (x>85)
    {
        printf("Grade A");
    }
    else if (x>60)
    {
        printf("Grade B");
    }
    else if (x>40)
    {
        printf("Grade C");
    }
    return 0;
}
