// string functions
#include <stdio.h>
#include <string.h>
int main()
{
    char str1[20], str2[20];
    int i;
    printf("string1:");
    gets(str1);
    printf("string2:");
    gets(str2);
    i = strcmp(str1, str2);
    if (i == 0)
        printf("equal\n");
    else
        printf("not equal\n");

    strcpy(str1, str2);
    printf("copying string 2 to string 1:%d\n" ,strcpy(str1, str2));

    printf("length of string1:%d\n " , strlen(str1));
    printf("length of string2:%d\n ", strlen(str2));

    strcat(str1, str2);
    printf("string after concatenation:%s\n", str1);
    return 0;
       
}
