#include <stdio.h>

// Function to calculate A^B % M
unsigned long long power_modulo(unsigned long long A, unsigned long long B, unsigned long long M) {
    unsigned long long result = 1;

    A = A % M;  // Reduce A to a number less than M

    while (B > 0) {
        // If B is odd, multiply result with A
        if (B % 2 == 1) {
            result = (result * A) % M;
        }

        // Divide B by 2
        B = B / 2;

        // Multiply A with itself
        A = (A * A) % M;
    }

    return result;
}

int main() {
    unsigned long long A, B, M;

    printf("Enter the values of A, B, and M: ");
    scanf("%llu %llu %llu", &A, &B, &M);

    unsigned long long result = power_modulo(A, B, M);

    printf("%llu\n", result);

    return 0;
}
