#include "..\includes\root.h"
#include <cmath>

double root(double index, double radicand) {

	// Fixes the way 'pow' behaves with this condition
	if (static_cast<int>(index) % 2 != 0 &&  radicand < 0) {
		return -pow(-radicand, 1 / index);
	}

	else {
		return pow(radicand, 1 / index);
	}
}