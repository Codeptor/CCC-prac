//Concatenate Two Strings
#include<stdio.h>
void strcat(char* s1, char* s2)
{
    int i=0,j=0;
    while(s1[i]!='\0')
    {
        i++;
    }
    while(s2[j]!='\0')
    {
        s1[i]=s2[j];
        i++;
        j++;
    }
    s1[i]='\0';
}
int main()
{
    char s1[100],s2[100];
    scanf("%s",s1);
    scanf("%s",s2);
    strcat(s1,s2);
    printf("%s",s1);
    return 0;
}
