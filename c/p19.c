#include <stdio.h>

#include <string.h>

#include <math.h>

#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int i, j, a[100][100];

    int sum = 0, n;

    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {

        for (j = 0; j < n; j++)
        {

            scanf("%d", &a[i][j]);
        }
    }

    if (n % 2 != 0)
    {

        for (i = 0; i < n; i++)
        {

            sum += a[i][i];

            sum += a[i][n - i - 1];
        }

        sum -= a[n / 2][n / 2];

        printf("%d", sum);

        return 0;
    }

    else
    {

        for (i = 0; i < n; i++)
        {

            sum += a[i][i];

            sum += a[i][n - i - 1];
        }

        printf("%d", sum);
    }
}