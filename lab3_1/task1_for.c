#include <math.h>
#include "func3_1.h"

double summ1_1(int n) {
	double a = 0;
	double s = 0;
	for (int i = 0; i < n - 1; ++i) {
		a = pow(-1, i) * ((double)(i + 1) / (double)(i * i * i + 2));
		s += a;
	}
	return s;
}