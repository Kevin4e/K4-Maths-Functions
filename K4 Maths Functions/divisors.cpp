#include "..\includes\divisors.h"
#include <iostream>

void divisors(int n) {
	// Positive divisors
	for (int i = abs(n); i > 0; --i) {
		if (abs(n) % i == 0) {
			std::cout << i << "\n";
		}
	}

	// Negative divisors
	for (int i = -1; i >= -abs(n); --i) {
		if (abs(n) % abs(i) == 0) {
			std::cout << i << "\n";
		}
	}
}