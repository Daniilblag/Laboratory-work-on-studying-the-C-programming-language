#include <stdio.h>
#include <math.h>

void main() {
	printf("Task 1\nOption 2\n");
	printf("f(x) = cos(x) + sin(x) + cos(3x) + sin(3x)\n");
	double x = 3.2;
	double f = cos(x) + sin(x) + cos(3 * x) + sin(3 * x);
	printf("x = %.6f\nf(x) = %.6f\n", x, f);
	printf("Enter x = ");
	scanf_s("%lf", &x);
	f = cos(x) + sin(x) + cos(3 * x) + sin(3 * x);
	printf("x = %.6f\nf(x) = %.6f\n", x, f);
	system("pause");
}