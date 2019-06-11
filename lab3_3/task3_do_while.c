#include <stdio.h>
#include <math.h>
#include "func3_3.h"

void print3(int n, int k) {
	double a = 0;
	int l = 0;
	int i = 0;
	do {
		a = pow(-1, i) * ((double)(i + 1) / (double)(i * i * i + 2));
		l += 1;
		if (l == k) {
			l = 0;
			++i;
			continue;
		}
		printf("%.4f\n", a);
		n = n - 1;
		if (n == 0)
			break;
		++i;
	} while (1);
}