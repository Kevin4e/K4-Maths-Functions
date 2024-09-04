#include "..\includes\prime.h"
#include <iostream>

bool isPrime(unsigned int n) {
	if (n == 0 || n == 1) {
		return false;
	}
	else if (n == 2) {
		return true;
	}
	else {
		for (unsigned int i = 2; i < n; ++i) {
			if (n % i == 0) {
				return false;
			}
		}
		return true;
	}
}