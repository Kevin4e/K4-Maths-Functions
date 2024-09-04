#include "..\includes\gcdlcm.h"
#include <iostream>

int gcd(int n1, int n2) {
	// Finding G.C.D. using Euclidean Algorithm
	if (n2 == 0) {
		return n1;
	}
	else {
		while (n2 != 0) {
			int remainder = n1 % n2;
			n1 = n2;
			n2 = remainder;
		}

		return abs(n1);
	}
}

int lcm(int n1, int n2) {
	return abs(n1 * n2) / gcd(n1, n2);
}