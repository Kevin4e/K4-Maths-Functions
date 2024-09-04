#include "..\includes\summation.h"
#include <cmath>

long double summation(double low_index, double high_index, double element) {
	long double sum = 0;

	for (int i = round(low_index); i <= round(high_index); ++i) {
		// sum = sum + element
		sum += element;
	}

	return sum;
}