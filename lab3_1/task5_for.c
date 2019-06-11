#include <math.h>
#include "func3_1.h"

int findFirstNegativeElement1(double eps) {
	double a = 0;
	for (int i = 0;; ++i) {
		a = pow(-1, i) * ((double)(i + 1) / (double)(i * i * i + 2));
		if ((a < 0) && (fabs(a) <= eps)) {
			return i + 1;
		}
	}
}