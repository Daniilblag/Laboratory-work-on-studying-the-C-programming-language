#include <math.h>
#include "func3_2.h"

double summ2_1(int n) {
	double a = 0;
	double s = 0;
	int i = 0;
	while (i < n - 1) {
		a = pow(-1, i) * ((double)(i + 1) / (double)(i * i * i + 2));
		s += a;
		++i;
	}
	return s;
}