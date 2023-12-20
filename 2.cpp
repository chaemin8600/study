#include <stdio.h>

int main()
{
	double a, b;
	scanf_s("%lf", &a);
	scanf_s("%lf", &b);

	printf("BMI: %f\n", a / (b * b));
}
