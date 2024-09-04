#include "..\includes\multiples.h"
#include <iostream>

void multiples(unsigned int n, unsigned long max) {
	for (unsigned int i = n; i <= max; i = i + n) {
		std::cout << i << "\n";
	}
}