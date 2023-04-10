//program to check password strength
#include<stdio.h>
#include<string.h>
int main()
{
    char str[20];
    int i, len, flag = 0;
    printf("enter the password:");
    gets(str);
    len = strlen(str);
    if (len < 8)
        printf("invalid password");

    else
    {
        for (i = 0; i < len; i++)
        {
            if (str[i] >= 'A' && str[i] <= 'Z')
                flag = 1;
            if (str[i] >= 'a' && str[i] <= 'z')
                flag = 1;
            if (str[i] >= '0' && str[i] <= '9')
                flag = 1;
            if (str[i] == '@' || str[i] == '#' || str[i] == '$' || str[i] == '%' || str[i] == '&' || str[i] == '*' || str[i] == '!')
                flag = 1;
        }
        if (flag == 1)
            printf("valid password");
        else
            printf("invalid password");
    }
    return 0;
}    
