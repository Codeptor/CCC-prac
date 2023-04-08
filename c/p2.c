#include<stdio.h>
int main()
{
    
    int x;
    printf("enter marks : ");
    scanf("%d",&x);

    if (x>85 && x<=100)
    {
        printf("Grade A");
    }
    else if (x>60 && x<=85)
    {
        printf("Grade B");
    }
    else if (x>40 && x<=60)
    {
        printf("Grade C");
    }
    return 0;
}