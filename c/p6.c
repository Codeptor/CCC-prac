#include <stdio.h>

int main() {
    int n, i, fact = 1;
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        fact *= i;
    }

    while (fact > 0) {
        if (fact % 10 == 1) {
            printf("no\n");
            return 0;
        }
        fact /= 10;
    }

    printf("%d\n", fact);
    return 0;
}
