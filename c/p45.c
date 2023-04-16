#include <stdio.h>
#include <string.h>

int strcmp(char* s1, char* s2) {
    int i = 0;
    while (s1[i] == s2[i]) {
        if (s1[i] == '\0') {
            return 0;
        }
        i++;
    }
    return s1[i] - s2[i];
}

int main() {
    char str1[50], str2[50];
    fgets(str1, 50, stdin);
    fgets(str2, 50, stdin);

    // remove newline character from input strings
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';

    printf("%d\n", strcmp(str1, str2));
    return 0;
}
