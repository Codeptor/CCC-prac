#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

char* newstr(char* str)
{
    int i, n = strlen(str);
    char* res = (char*) malloc((n+1)*sizeof(char));
    for (i = 0; i < n; i++)
    {
        if (islower(str[i])) res[i] = toupper(str[i]);  
        else res[i] = tolower(str[i]);
    }
    res[n] = '\0';
    return res;
}

int main()
{
    char str[50];
    fgets(str, 50, stdin); // use fgets instead of gets
    char* new_str = newstr(str);
    puts(new_str);
    free(new_str);
    return 0;
}
