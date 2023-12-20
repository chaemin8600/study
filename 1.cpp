#include <stdio.h>

int main()
{
	double a, b;
	scanf_s("%lf %lf", &a, &b);
	double c = a + b;
	printf("%.2lf + %.lf = %.2lf", a, b, c);
}
