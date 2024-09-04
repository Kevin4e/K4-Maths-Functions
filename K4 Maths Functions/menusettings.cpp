/**

#include "..\includes\menusettings.h"

#include <iostream>
#include <string>

std::string number;

double SumDefinedSize() {
	unsigned int size;

	std::cout << "Enter a size: ";
	std::cin >> size;

	if (size == 0) {
		std::cerr << "Error! Size of a number(s) list must exist!";
		return -1;
	}
	else {
		int SumDefinedSizeResult = 0;

		for (unsigned int i = 0; i < size; ++i) {
			std::cout << "Insert the " << i + 1 << " number: ";
			std::cin >> number;

			// Sum = sum + number
			SumDefinedSizeResult += std::stoi(number);
		}

		return SumDefinedSizeResult;
	}
}

double SumUndefinedSize() {
	unsigned int i = 0, SumUndefinedSizeResult = 0;

	std::cout << "Enter 'DONE' to stop." << std::endl;

	while (true) {
		i++;
		std::cout << "Insert the " << i << " number: ";
		std::cin >> number;

		if (number == "DONE") {
			break;
		}

		// Sum = sum + number
		SumUndefinedSizeResult += std::stoi(number);

	}

	return SumUndefinedSizeResult;
}

double AvgDefinedSize() {
	return SumDefinedSizeResult;
}

double AvgUndefinedSize() {
	return SumUndefinedSizeResult / i;
}