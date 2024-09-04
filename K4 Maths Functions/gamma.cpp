#define _USE_MATH_DEFINES

#include "..\includes\gamma.h"
#include <cmath>

long double gamma(double n) {
	// Gamma approximation using Stirling's formula
	return sqrt(2 * M_PI * n) * pow(n / M_E, n);
}