#include <math.h>
#include "func1.h"

extern double x, result;
extern void func1_7() {
	result = cos(x) + sin(x) + cos(3 * x) + sin(3 * x);
}