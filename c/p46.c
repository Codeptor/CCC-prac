#include<stdio.h>
void strcpy(char* s1, char* s2)
{
    int i = 0;
    while (s2[i] != '\0') {
        s1[i] = s2[i];
        i++;
    }
    s1[i] = '\0';
}
int main()
{
	char str1[50], str2[50];
	gets(str1);
	strcpy(str2, str1);
	puts(str1);
	puts(str2);	
	return 0;
}

//StrCpy Function
#include<stdio.h>
