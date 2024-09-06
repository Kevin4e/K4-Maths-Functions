#define _USE_MATH_DEFINES

#include "..\includes\hyperbolic.h"
#include <cmath>
#include <iostream>

// Inverse hyperbolic functions

double arcsinh(double n) {
	return log(n + sqrt(pow(n, 2) + 1));
}

double arccosh(double n) {
	return log(n + sqrt(pow(n, 2) - 1));
}
double arctanh(double n) {
	return (1/2) * log( (1 + n) / (1 - n) );
}


// Hyperbolic reciprocal functions

double csch(double n) {
	return 1 / sinh(n);
}
double sech(double n) {
	return 1 / cosh(n);
}
double coth(double n) {
	return cosh(n) / sinh(n);
}


// Hyperbolic inverse reciprocal functions

double arccsch(double n) {
	return log(1 + sqrt(1 + pow(n, 2))) / n;
}
double arcsech(double n) {
	return log(1/n + sqrt(pow(1/n, 2) - 1));
}
double arccoth(double n) {
	return (1 / 2) * log((n + 1) / (n - 1));
}