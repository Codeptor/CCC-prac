//program to calculate area of a circle and square
#include<stdio.h>
#include<math.h>
int main()
{
    int r, l, ch;
    float area;
    printf("enter the choice:\n1.circle\n2.square\n");
    scanf("%d", &ch);
    switch (ch)
    {
    case 1:
        printf("enter radius:");
        scanf("%d", &r);
        area = 3.14 * r * r;
        printf("area:%f", area);
        break;
    case 2:
        printf("enter side:");
        scanf("%d", &l);
        area = l * l;
        printf("area:%f", area);
        break;
    default:
        printf("invalid choice");
    }
    return 0;
}