#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);

    int len = strlen(str);
    char compressed[100];
    int pos = 0;

    for (int i = 0; i < len; i++) {
        int count = 1;
        while (i < len - 1 && str[i] == str[i+1]) {
            count++;
            i++;
        }
        compressed[pos++] = str[i];
        if (count > 1) {
            char count_str[10];
            sprintf(count_str, "%d", count);
            for (int j = 0; j < strlen(count_str); j++) {
                compressed[pos++] = count_str[j];
            }
        }
    }
    compressed[pos] = '\0';

    printf("%s", compressed);

    return 0;
}
