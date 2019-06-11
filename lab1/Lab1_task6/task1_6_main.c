#include <stdio.h>
#include <math.h>

extern double x, result;
extern void func1_6();
void main() {
	printf("Task 6\nOption 2\n");
	printf("f(x) = cos(x) + sin(x) + cos(3x) + sin(3x)\n");
	x = 3.2;
	func1_6();
	printf("x = %.6f\nf(x) = %.6f\n", x, result);
	printf("Enter x = ");
	scanf_s("%lf", &x);
	func1_6();
	printf("x = %.6f\nf(x) = %.6f\n", x, result);
	system("pause");
	return;
}