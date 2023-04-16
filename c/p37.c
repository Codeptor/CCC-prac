#include<stdio.h>
#include<math.h>
double hypotenuse(double base, double perp)
{
	double hyp;
    hyp = sqrt(base * base + perp * perp);
    return hyp;
}
int main()
{
	double A, B, C;
	scanf("%lf%lf", &A, &B);
	C = hypotenuse(A, B);
	printf("%.6lf", C);
	return 0;
}