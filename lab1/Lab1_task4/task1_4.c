#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void func1_4();
double x, result;

void main() {
	printf("Task 4\nOption 2\n");
	printf("f(x) = cos(x) + sin(x) + cos(3x) + sin(3x)\n");
	x = 3.2;
	func1_4(x);
	printf("x = %.6f\nf(x) = %.6f\n", x, result);
	printf("Enter x = ");
	scanf_s("%lf", &x);
	func1_4();
	printf("x = %.6f\nf(x) = %.6f\n", x, result);
	system("pause");
}

void func1_4() {
	result = cos(x) + sin(x) + cos(3 * x) + sin(3 * x);
}