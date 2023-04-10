#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%[^\n]s", str);  // read input string with spaces using %[^\n] format specifier
    int len = strlen(str);
    printf("%d\n", len);
    return 0;
}
