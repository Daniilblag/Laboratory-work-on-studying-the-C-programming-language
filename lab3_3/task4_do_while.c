#include <math.h>
#include "func3_3.h"

int findFirstElement3(double eps) {
	double a = 0;
	int i = 0;
	do {
		a = pow(-1, i) * ((double)(i + 1) / (double)(i * i * i + 2));
		if (fabs(a) <= eps) {
			return i + 1;
			break;
		}
		++i;
	} while (1);
}