//convert lower case to upper case  and vice versa
#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if(c>='a'&&c<='z')
    {
        c=c-32;
        printf("%c",c);
    }
    else if(c>='A'&&c<='Z')
    {
        c=c+32;
        printf("%c",c);
    }
    return 0;
}