#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#include <math.h>
#include <stdio.h>

int main() {
    double base, exp, result;
    scanf("%lf", &base);
    scanf("%lf", &exp);
    result = pow(base, exp);

    printf("%0.0f",result);
    return 0;
}


