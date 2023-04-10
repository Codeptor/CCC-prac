//program to change vowels to $ and consonants to # in a string
//vowels to uppercase
#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
    char str[20];
    int i, len;
    printf("enter the string:");
    gets(str);
    len = strlen(str);
    for (i = 0; i < len; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            str[i] = '$';
        else
            str[i] = '#';
    }
    for (i = 0; i < len; i++)
    {
        if (str[i] == '$')
            str[i] = toupper(str[i]);
        else
            str[i] = tolower(str[i]);
    
    }
    printf("string after replacement:%s", str);
    return 0;
}