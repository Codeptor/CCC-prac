//reverse vowels in a string
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    char *str = (char*) malloc(100 * sizeof(char));
    scanf("%s", str);
    int i, j, len = strlen(str);
    for(i = 0, j = len - 1; i < j; i++, j--)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            if(str[j] == 'a' || str[j] == 'e' || str[j] == 'i' || str[j] == 'o' || str[j] == 'u' || str[j] == 'A' || str[j] == 'E' || str[j] == 'I' || str[j] == 'O' || str[j] == 'U')
            {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
            else
            {
                j++;
            }
        }
        else
        {
            i--;
        }
    }
    printf("%s", str);
    return 0;
}