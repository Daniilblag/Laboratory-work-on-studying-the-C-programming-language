#include <stdio.h>
#include <math.h>

void main() {
	printf("Task 5\nOption 2\n");
	printf("f(x) = cos(x) + sin(x) + cos(3x) + sin(3x)\n");
	float x = 3.2;
	float f = func1_5(x);
	printf("x = %.6f\nf(x) = %.6f\n", x, f);
	printf("Enter x = ");
	scanf_s("%lf", &x);
	f = func1_5(x);
	printf("x = %.6f\nf(x) = %.6f\n", x, f);
	system("pause");
}