#include <math.h>
#include "func3_3.h"

int findFirstNegativeElement3(double eps) {
	double a = 0;
	int i = 0;
	do {
		a = pow(-1, i) * ((double)(i + 1) / (double)(i * i * i + 2));
		if ((a < 0) && (fabs(a) <= eps)) {
			return i + 1;
		}
		++i;
	} while (1);
}