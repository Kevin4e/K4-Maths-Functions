#include "..\includes\fact.h"

unsigned long long fact(unsigned int n) {
	unsigned long long factorial = 1;

	for (unsigned int i = 1; i <= n; ++i) {
		// factorial = factorial*i
		factorial *= i;
	}
	
	return factorial;
}
