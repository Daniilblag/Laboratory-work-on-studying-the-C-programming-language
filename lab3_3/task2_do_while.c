#include <math.h>
#include "func3_3.h"

double summ3_2(double eps) {
	double a = 0;
	double s = 0;
	int i = 0;
	do {
		a = pow(-1, i) * ((double)(i + 1) / (double)(i * i * i + 2));
		if (fabs(a) <= eps) {
			return s;
		}
		s += a;
		++i;
	} while (1);
}