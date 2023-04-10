//count words in a string
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i, count = 0;
    fgets(str, 100, stdin);
    for(i = 0; i < strlen(str); i++)
    {
        if(str[i] == ' ')
        {
            count++;
        }
    }
    printf("%d", count + 1);
    return 0;
}