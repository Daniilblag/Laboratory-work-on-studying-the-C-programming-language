#include <math.h>
#include "func3_2.h"

double summ2_2(double eps) {
	double a = 0;
	double s = 0;
	int i = 0;
	while (1) {
		a = pow(-1, i) * ((double)(i + 1) / (double)(i * i * i + 2));
		if (fabs(a) <= eps)
		{
			return s;
		}
		s += a;
		++i;
	}
}