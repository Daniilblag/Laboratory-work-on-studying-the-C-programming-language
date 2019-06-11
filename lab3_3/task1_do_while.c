#include <math.h>
#include "func3_3.h"

double summ3_1(int n) {
	double a = 0;
	double s = 0;
	int i = 0;
	do {
		a = pow(-1, i) * ((double)(i + 1) / (double)(i * i * i + 2));
		s += a;
		++i;
	} while (i < n - 1);
	return s;
}