#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char** leapYears(int* years, int n) {
    char** result = (char**) malloc(n * sizeof(char*));
    for (int i = 0; i < n; i++) {
        result[i] = (char*) malloc(4 * sizeof(char));
        if (years[i] % 4 == 0) {
            strcpy(result[i], "yes");
        } else {
            strcpy(result[i], "no");
        }
    }
    return result;
}

int main() {
    int n;
    scanf("%d", &n);
    int* years = (int*) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &years[i]);
    }
    char** result = leapYears(years, n);
    for (int i = 0; i < n; i++) {
        printf("%s\n", result[i]);
    }
    for (int i = 0; i < n; i++) {
        free(result[i]);
    }
    free(result);
    free(years);
    return 0;
}
