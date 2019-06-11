#include <math.h>
#include "func3_1.h"

double summ1_2(double eps) {
	double a = 0;
	double s = 0;
	for (int i = 0; ; ++i) {
		a = pow(-1, i) * ((double)(i + 1) / (double)(i * i * i + 2));
		if (fabs(a) <= eps) {
			return s;
		}
		s += a;
	}
}