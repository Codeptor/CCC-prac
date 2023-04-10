//input string and print first word
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main()
{
    char str[100];
    scanf("%[^\n]%*c", str);
    int i;
    for(i = 0; i < strlen(str); i++)
    {
        if(str[i] == ' ')
        {
            str[i] = '\0';
            break;
        }
    }
    printf("%s", str);
    return 0;
}
