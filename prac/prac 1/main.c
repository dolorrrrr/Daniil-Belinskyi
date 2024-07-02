#include <stdio.h>
#include <string.h>

int main(void)
{
	int t1, t2, t3;
	double res;

	printf("Input 3 values: ");
	scanf_s("%d %d %d", &t1, &t2, &t3);

	res = (double)(t1 + t2 + t3) / 3;

	printf("\nTime required to eat the pie: %.2lf hours", res);

	return 0;
}