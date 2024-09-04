#include "..\includes\infproduct.h"
#include <cmath>

long double infproduct(double low_index, double high_index, double element) {
	long double product = 1;

	for (int i = round(low_index); i <= round(high_index); ++i) {
		// product = product * element
		product *= element;
	}

	return product;
}