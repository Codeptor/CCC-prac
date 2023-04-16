#include <stdio.h>

void fun(int var1, int var2)
{
	int sum = var1 + var2;
    printf ("%d",sum);


}
int main()
{
	int var1, var2;
	scanf("%d %d", &var1, &var2);
	fun(var1, var2);
    int sum = var1 + var2;
	printf("%d", sum);
	return 0;
}