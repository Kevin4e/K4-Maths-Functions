#include "..\includes\logarithm.h"
#include <cmath>

double logarithm(double base, double argument) {
	return log(argument) / log(base);
}

double ln(double argument) {
	return log(argument);
}