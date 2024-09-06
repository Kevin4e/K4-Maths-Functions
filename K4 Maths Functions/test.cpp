#define _USE_MATH_DEFINES

#include "..\includes\fact.h"
#include "..\includes\logarithm.h"
#include "..\includes\prime.h"
#include "..\includes\multiples.h"
#include "..\includes\divisors.h"
#include "..\includes\root.h"
#include "..\includes\gcdlcm.h"
#include "..\includes\trigonometry.h"
#include "..\includes\gamma.h"
#include "..\includes\summation.h"
#include "..\includes\infproduct.h"
#include "..\includes\hyperbolic.h"
#include <iostream>

int main() {
	unsigned int choice;

	while (true) {
		std::cout << "K4 Maths Functions Menu" << std::endl;
		std::cout << "Choose:" << std::endl;
		std::cout << std::endl;

		std::cout << "1.  Factorial; \n";
		std::cout << "2.  Logarithm; \n";
		std::cout << "3.  Natural logarithm; \n";
		std::cout << "4.  Prime number check; \n";
		std::cout << "5.  Multiples; \n";
		std::cout << "6.  Divisors: \n";
		std::cout << "7.  Root; \n";
		std::cout << "8.  G.C.D. (Greatest Common Divisor); \n";
		std::cout << "9.  L.C.M. (Least Common Multiple); \n";
		std::cout << "10. Menu of Sum, Average, Max & Min numbers; \n";
		std::cout << "11. Trigonometry functions; \n";
		std::cout << "12. Gamma function \n";
		std::cout << "13. Summation \n";
		std::cout << "14. Infinite product \n";
		std::cout << "15. Hyperbolic functions \n";
		std::cout << std::endl;

		std::cout << "Enter your choice: ";
		std::cin >> choice;
		std::cout << std::endl;

		if (choice == 1) {
			double n;

			do {
				std::cout << "Enter a number: ";
				std::cin >> n;

				std::cout << std::endl;

				if (n < 0) {
					std::cerr << "The factorial is not defined for negative numbers!" << std::endl;
					std::cout << std::endl;
				}

				else if (floor(n) != n) {
					std::cerr << "The factorial is not defined for decimal values, use the gamma function instead!" << std::endl;
					std::cout << std::endl;
				}
				else if (n > 20) {
					std::cerr << "Warning! The factorial of numbers higher than 20 is not correct!" << std::endl;
					std::cout << std::endl;
				}

			} while (n < 0 || floor(n) != n);
			
			std::cout << "The result is: " << n << "! = " << fact(n) << std::endl;
		}
		else if (choice == 2) {
			double a, b;

			do {

				std::cout << "Enter the base: ";
				std::cin >> a;

				std::cout << "Enter the argument: ";
				std::cin >> b;

				std::cout << std::endl;

				if (a <= 0 || a == 1 || b <= 0) {
					std::cerr << "Logarithm conditions of existence violated!" << std::endl;
					std::cout << "| Base > 0 AND Base != 1 \n";
					std::cout << "| Argument > 0 \n";

					std::cout << std::endl;
				}

			} while (a <= 0 || a == 1 || b <= 0);

			std::cout << "The result is: " << logarithm(a, b) << std::endl;
		}
		else if (choice == 3) {
			double n;

			do {
				std::cout << "Enter a number: ";
				std::cin >> n;

				std::cout << std::endl;

				if (n <= 0) {
					std::cerr << "Natural logarithm E.C. (existence conditions) violated!" << std::endl;
					std::cout << "| Argument > 0" << std::endl;

					std::cout << std::endl;
				}
			} while (n <= 0);
			

			std::cout << "The result is: " << ln(n) << std::endl;
		}
		else if (choice == 4) {
			double n;

			do {
				std::cout << "Enter a number: ";
				std::cin >> n;

				if (n < 0) {
					std::cout << "There are no negative prime numbers!" << std::endl;

					std::cout << std::endl;
				}
				else if (floor(n) != n) {
					std::cout << "There are no decimal prime numbers!" << std::endl;

					std::cout << std::endl;
				}

			} while (n < 0);
			
			if (isPrime(n)) {
				std::cout << "It's a prime number.";
			}
			else {
				std::cout << "It's not a prime number.";
			}

			std::cout << std::endl;
		}
		else if (choice == 5) {
			double n;
			double max;

			do {
				std::cout << "Enter a number: ";
				std::cin >> n;

				std::cout << "Enter the max multiple: ";
				std::cin >> max;

				std::cout << std::endl;

				if (n > max || n <= 0 || max <= 0 || floor(n) != n || floor(max) != max) {
					std::cerr << "Error! The number cannot be greater than the imposed max, and both cannot be decimal, less or equal to 0!" << std::endl;
					std::cout << std::endl;
				}

			} while (n > max || n <= 0 || max <= 0);

			std::cout << "Multiples of " << n << " list until " << max << ":" << std::endl;

			multiples(n, max);
		}
		else if (choice == 6) {
			int n;

			do {
				std::cout << "Enter a number: ";
				std::cin >> n;

				std::cout << std::endl;

				if (floor(n) != n) {
					std::cerr << "Error! Divisors do not exist for decimal numbers!" << std::endl;
					std::cout << std::endl;
				}

			} while (floor(n) != n);
			
			std::cout << "Divisors of " << n << " list:" << std::endl;

			divisors(n);
		}
		else if (choice == 7) {
			double a, b;

			do {
				std::cout << "Enter the index of the root: ";
				std::cin >> a;

				std::cout << "Enter the radicand: ";
				std::cin >> b;

				std::cout << std::endl;

				if ((a == 0 || (static_cast<int>(a) % 2 == 0 && b < 0)) || (a <= 0 && b == 0)) {
					std::cerr << "The index of a root cannot be equal to 0, the radicand cannot be negative when the index is an even number, and the index cannot be less than 0 when the radicand is 0!" << std::endl;
					std::cout << std::endl;
				}

			} while ((a == 0 || (static_cast<int>(a) % 2 == 0 && b < 0)) || (a <= 0 && b == 0));

			std::cout << "The result is: " << root(a, b) << std::endl;
		}
		else if (choice == 8) {
			int a, b;

			std::cout << "Enter the first number: ";
			std::cin >> a;

			std::cout << "Enter the second number: ";
			std::cin >> b;

			std::cout << "The G.C.D. of " << a << " and " << b << " is: " << gcd(a, b);

			std::cout << std::endl;
		}
		else if (choice == 9) {
			int a, b;

			std::cout << "Enter the first number: ";
			std::cin >> a;

			std::cout << "Enter the second number: ";
			std::cin >> b;

			std::cout << "The L.C.M. of " << a << " and " << b << " is: " << lcm(a, b);

			std::cout << std::endl;
		}
		/**
		else if (choice == 10) {
			unsigned int ListType, FunctionType;
			do {
				std::cout << "Choose the kind of numbers' input list: ";
				std::cout << "1. Defined size of listed numbers; \n";
				std::cout << "2. Undefined size of listed numbers.\n";
				std::cout << "0. Exit. \n";
				std::cout << std::endl;

				std::cout << "Enter your choice (1 or 2, 0 to exit)" << std::endl;
				std::cin >> ListType;

				if (ListType == 1) {
					DefinedSizeListNumbersInput();
				}
				else if (ListType == 2) {
					UndefinedSizeListNumbersInput();
				}
				else if (ListType == 0) {
					break;
				}
				else {
					std::cout << "Invalid input!" << std::endl;
					continue;
				}

				std::cout << "Choose:" << std::endl;
				std::cout << "1. Sum \n";
				std::cout << "2. Average \n";
				std::cout << "3. Max number \n";
				std::cout << "4. Min number \n";
				std::cout << "5. All \n";
				std::cout << "-1. Exit \n";
				std::cout << std::endl;

				std::cout << "Enter your choice (1, 2, 3 or 4, 0 to exit): ";
				std::cin >> FunctionType;

				if (FunctionType == -1) {
					break;
				}
				else {
					std::cout << "Invalid input!" << std::endl;
					continue;
				}

				if (ListType == 1) {
					unsigned int size;

					std::cout << "Enter a size: ";
					std::cin >> size;

					if (FunctionType == 1) {
						std::cout << "The sum is: " << SumDefinedSize();
					}
					else if (FunctionType == 2) {
						SumDefinedSize();
						std::cout << "The average is " << AvgDefinedSize();
					}
					else if (FunctionType == 3) {
						std::cout << "The max number is " << MaxNumberDefinedSize();
					}
					else if (FunctionType == 4) {
						std::cout << "The min number is " << MinNumberDefinedSize();
					}
					else if (FunctionType == 5) {
						std::cout << "The sum is: " << SumDefinedSize();
						std::cout << "The average is " << AvgDefinedSize();
						std::cout << "The max number is " << MaxNumberDefinedSize();
						std::cout << "The min number is " << MinNumberDefinedSize();
					}
				}
				else if (ListType == 2) {
					if (FunctionType == 1) {
						std::cout << "The sum is: " << SumUndefinedSize();
					}
					else if (FunctionType == 2) {
						SumUndefinedSize();
						std::cout << "The average is " << AvgUndefinedSize();
					}
					else if (FunctionType == 3) {
						std::cout << "The max number is " << MaxNumberUndefinedSize();
					}
					else if (FunctionType == 4) {
						std::cout << "The min number is " << MinNumberUndefinedSize();
					}
					else if (FunctionType == 5) {
						std::cout << "The sum is: " << SumUndefinedSize();
						std::cout << "The average is " << AvgUndefinedSize();
						std::cout << "The max number is " << MaxNumberUndefinedSize();
						std::cout << "The min number is " << MinNumberUndefinedSize();
					}
				}

			} while (ListType != 0 || FunctionType != -1);









			unsigned int sumType;

			std::cout << "Choose the kind of sum:" << std::endl;
			
			

			std::cout << "Enter the choice: ";
			std::cin >> sumType;

			if (sumType == 1) {
				std::cout << "The result is: " << SumDefinedSize();
			}
			else if (sumType == 2) {
				std::cout << "The result is: " << SumUndefinedSize();
			}

			
		}
		**/

		else if (choice == 11) {
			double trgfunction;
			double angular_unit;
			
			do {
				std::cout << "Choose the trigonometric function:" << std::endl;
				std::cout << "1.  sin; \n";
				std::cout << "2.  cos; \n";
				std::cout << "3.  tan; \n";
				std::cout << "4.  arcsin; \n";
				std::cout << "5.  arccos; \n";
				std::cout << "6.  arctan; \n";
				std::cout << "7.  csc; \n";
				std::cout << "8.  sec; \n";
				std::cout << "9.  cot; \n";
				std::cout << "10. arccsc; \n";
				std::cout << "11. arcsec; \n";
				std::cout << "12. arccot; \n";
				std::cout << "0.  exit. \n";
				std::cout << std::endl;

				std::cout << "Enter your choice (1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 or 0): ";
				std::cin >> trgfunction;

				if (trgfunction == 0) {
					break;
				}
				else if (trgfunction < 1 || trgfunction > 12) {
					std::cout << std::endl;
					std::cout << "Invalid input!" << std::endl;
					std::cout << std::endl;
					continue;
				}

				std::cout << std::endl;

				do {
					std::cout << "Choose the angle unit:" << std::endl;
					std::cout << "1. Radiants; \n";
					std::cout << "2. Degrees; \n";
					std::cout << "3. Gradiants; \n";
					std::cout << "-1 exit. \n";
					std::cout << std::endl;
					std::cout << "Enter your choice (1, 2, 3 or -1): ";
					std::cin >> angular_unit;

					if (angular_unit == -1) {
						break;
					}
					else if (angular_unit < 1 || angular_unit > 3) {
						std::cout << std::endl;
						std::cout << "Invalid input!" << std::endl;
						std::cout << std::endl;
						continue;
					}

					std::cout << std::endl;

					double n;

					do {
						std::cout << "Enter a number: ";
						std::cin >> n;

						std::cout << std::endl;

						if (trgfunction == 3 || trgfunction == 8) {
							if (angular_unit == 1) {

								// Makes the angle from 0 to 2PI (rad)
								while (n > 2 * M_PI) {
									n = n - 2 * M_PI;
									// 3PI = 3PI - 2PI
									// 3PI = 1PI
									// n = PI
								}

								// Makes the angle from 0 to -2PI (rad)
								while (n < -2 * M_PI) {
									n = n + 2 * M_PI;
									// -3PI = -3PI + 2PI
									// -3PI = -1PI
									// n = -PI
								}

								if (n == M_PI / 2 || n == 3 * M_PI / 2 || n == -M_PI / 2 || n == -3 * M_PI / 2) {
									std::cout << "The result is not defined!" << std::endl;
									std::cout << std::endl;
								}
							}
							else if (angular_unit == 2) {

								// Makes the angle from 0 to 360 (deg)
								while (n > 360) {
									n = n - 360;
								}

								// Makes the angle from 0 to -360 (deg)
								while (n < -360) {
									n = n + 360;
								}

								if (n == 90 || n == 270 || n == -90 || n == -360) {
									std::cout << "The result is not defined!" << std::endl;
									std::cout << std::endl;
								}
							}
							else if (angular_unit == 3) {

								// Makes the angle from 0 to 400 (grad)
								while (n > 400) {
									n = n - 400;
								}

								// Makes the angle from 0 to -400 (grad)
								while (n < -400) {
									n = n + 400;
								}

								if (n == 100 || n == 300 || n == -100 || n == -400) {
									std::cout << "The result is not defined!" << std::endl;
									std::cout << std::endl;
								}
							}
						}
						else if (trgfunction == 7 || trgfunction == 9) {

							if (angular_unit == 1) {

								while (n > 2 * M_PI) {
									n = n - 2 * M_PI;
								}

								while (n < -2 * M_PI) {
									n = n + M_PI;
								}

								if (n == 0 || n == M_PI || n == -M_PI) {
									std::cout << "The result is not defined!" << std::endl;
									std::cout << std::endl;
								}
							}
							else if (angular_unit == 2) {

								while (n > 360) {
									n = n - 360;
								}

								while (n < -360) {
									n = n + 360;
								}

								if (n == 0 || n == 180 || n == -180) {
									std::cout << "The result is not defined!" << std::endl;
									std::cout << std::endl;
								}
							}
							else if (angular_unit == 3) {

								while (n > 400) {
									n = n - 400;
								}
								while (n < -400) {
									n = n + 400;
								}

								if (n == 0 || n == 200 || n == -200) {
									std::cout << "The result is not defined!" << std::endl;
									std::cout << std::endl;
								}
							}
						}


						else {
							if (((trgfunction == 4 || trgfunction == 5) && (n > 1 || n < -1)) || (((trgfunction == 10 || trgfunction == 11)) && (n < 1 && n > -1))) {
								std::cerr << "Error! You cannot use numbers outside the range of 1 and -1 while using inverse trigonometric functions, except for arctan, ";
								std::cerr << "and you cannot use numbers inside the range of 1 and -1 while using inverse reciprocal trigonometric functions, except for arccot!" << std::endl;
								std::cout << std::endl;
								continue;
							}
						}

					} while (((trgfunction == 4 || trgfunction == 5) && (n > 1 || n < -1)) || (((trgfunction == 10 || trgfunction == 11)) && (n < 1 && n > -1)));
						
					std::cout << "The result is: ";

					// Radiants
					if (angular_unit == 1) {
						if (trgfunction == 1) {
							std::cout << "sin(" << n << " rad) = " << sin_rad(n);
						}
						else if (trgfunction == 2) {
							std::cout << "cos(" << n << " rad) = " << cos_rad(n);
						}
						else if (trgfunction == 3) {
							std::cout << "tan(" << n << " rad) = " << tan_rad(n);
						}
						else if (trgfunction == 4) {
							std::cout << "arcsin(" << n << ") = " << arcsin_rad(n) << " rad";
						}
						else if (trgfunction == 5) {
							std::cout << "arccos(" << n << ") = " << arccos_rad(n) << " rad";
						}
						else if (trgfunction == 6) {
							std::cout << "arctan(" << n << ") = " << arctan_rad(n) << " rad";
						}
						else if (trgfunction == 7) {
							std::cout << "csc(" << n << " rad) = " << csc_rad(n);
						}
						else if (trgfunction == 8) {
							std::cout << "sec(" << n << " rad) = " << sec_rad(n);
						}
						else if (trgfunction == 9) {
							std::cout << "cot(" << n << " rad) = " << cot_rad(n);
						}
						else if (trgfunction == 10) {
							std::cout << "arccsc(" << n << ") = " << arccsc_rad(n) << " rad";
						}
						else if (trgfunction == 11) {
							std::cout << "arcsec(" << n << ") = " << arcsec_rad(n) << " rad";
						}
						else {
							std::cout << "arccot(" << n << ") = " << arccot_rad(n) << " rad";
						}
					}

					// Degrees
					else if (angular_unit == 2) {
						if (trgfunction == 1) {
							std::cout << "sin(" << n << " deg) = " << sin_deg(n);
						}
						else if (trgfunction == 2) {
							std::cout << "cos(" << n << " deg) = " << cos_deg(n);
						}
						else if (trgfunction == 3) {
							std::cout << "tan(" << n << " deg) = " << tan_deg(n);
						}
						else if (trgfunction == 4) {
							std::cout << "arcsin(" << n << ") = " << arcsin_deg(n) << " deg";
						}
						else if (trgfunction == 5) {
							std::cout << "arccos(" << n << ") = " << arccos_deg(n) << " deg";
						}
						else if (trgfunction == 6) {
							std::cout << "arctan(" << n << ") = " << arctan_deg(n) << " deg";
						}
						else if (trgfunction == 7) {
							std::cout << "csc(" << n << " deg) = " << csc_deg(n);
						}
						else if (trgfunction == 8) {
							std::cout << "sec(" << n << " deg) = " << sec_deg(n);
						}
						else if (trgfunction == 9) {
							std::cout << "cot(" << n << " deg) = " << cot_deg(n);
						}
						else if (trgfunction == 10) {
							std::cout << "arccsc(" << n << ") = " << arccsc_deg(n) << " deg";
						}
						else if (trgfunction == 11) {
							std::cout << "arcsec(" << n << ") = " << arcsec_deg(n) << " deg";
						}
						else {
							std::cout << "arccot(" << n << ") = " << arccot_deg(n) << " deg";
						}
					}

					// Gradiants
					else {
						if (trgfunction == 1) {
							std::cout << "sin(" << n << " grad) = " << sin_grad(n);
						}
						else if (trgfunction == 2) {
							std::cout << "cos(" << n << " grad) = " << cos_grad(n);
						}
						else if (trgfunction == 3) {
							std::cout << "tan(" << n << " grad) = " << tan_grad(n);
						}
						else if (trgfunction == 4) {
							std::cout << "arcsin(" << n << ") = " << arcsin_grad(n) << " grad";
						}
						else if (trgfunction == 5) {
							std::cout << "arccos(" << n << ") = " << arccos_grad(n) << " grad";
						}
						else if (trgfunction == 6) {
							std::cout << "arctan(" << n << ") = " << arctan_grad(n) << " grad";
						}
						else if (trgfunction == 7) {
							std::cout << "csc(" << n << " grad) = " << csc_grad(n);
						}
						else if (trgfunction == 8) {
							std::cout << "sec(" << n << " grad) = " << sec_grad(n);
						}
						else if (trgfunction == 9) {
							std::cout << "cot(" << n << " grad) = " << cot_grad(n);
						}
						else if (trgfunction == 10) {
							std::cout << "arccsc(" << n << ") = " << arccsc_grad(n) << " grad";
						}
						else if (trgfunction == 11) {
							std::cout << "arcsec(" << n << ") = " << arcsec_grad(n) << " grad";
						}
						else {
							std::cout << "arccot(" << n << ") = " << arccot_grad(n) << " grad";
						}
					}
					std::cout << std::endl;
					break;
				} while (trgfunction != 0 || angular_unit != -1);
				break;
			} while (trgfunction != 0);
		}
		else if (choice == 12) {
			std::cerr << "Warning: This function's results are approximated via Stirling's formula and may lack full accuracy." << std::endl;
			std::cout << std::endl;

			double n;

			do {
				std::cout << "Enter a number: ";
				std::cin >> n;

				std::cout << std::endl;

				if (n < 0) {
					std::cout << "The gamma function, approximated using Stirling's formula, is not defined for negative numbers!" << std::endl;
					std::cout << std::endl;
				}
			} while (n < 0);

			std::cout << "The result is: " << gamma(n) << std::endl;
		}
		else if (choice == 13) {
			std::cerr << "This is a prototype, which means it's a limited function." << std::endl;
			std::cout << std::endl;

			double a;
			double b;
			double c;

			std::cout << "Enter the low index: ";
			std::cin >> a;

			std::cout << std::endl;

			std::cout << "Enter the high index: ";
			std::cin >> b;

			std::cout << std::endl;

			std::cout << "Enter the element: ";
			std::cin >> c;

			std::cout << std::endl;

			std::cout << "The result is: " << summation(a, b, c) << std::endl;

		}
		else if (choice == 14) {
			std::cerr << "This is a prototype, which means it's a limited function." << std::endl;
			std::cout << std::endl;

			double a;
			double b;
			double c;

			std::cout << "Enter the low index: ";
			std::cin >> a;

			std::cout << std::endl;

			std::cout << "Enter the high index: ";
			std::cin >> b;

			std::cout << std::endl;

			std::cout << "Enter the element: ";
			std::cin >> c;

			std::cout << std::endl;

			std::cout << "The result is: " << infproduct(a, b, c) << std::endl;

		}
		else if (choice == 15) {
			double hypfunction;

			do {
				std::cout << "Choose the hyperbolic function:" << std::endl;
				std::cout << "1.  sinh \n";
				std::cout << "2.  cosh \n";
				std::cout << "3.  tanh \n";
				std::cout << "4.  arcsinh \n";
				std::cout << "5.  arccosh \n";
				std::cout << "6.  arctanh \n";
				std::cout << "7.  csch \n";
				std::cout << "8.  sech \n";
				std::cout << "9.  coth \n";
				std::cout << "10. arccsch \n";
				std::cout << "11. arcsech \n";
				std::cout << "12. arccoth \n";
				std::cout << "0.  exit \n";
				std::cout << std::endl;
				
				std::cout << "Enter your choice (1, 2, 3, 4, 5, 6 or 0): ";
				std::cin >> hypfunction;

				if (hypfunction == 0) {
					break;
				}
				else if ((hypfunction < 1 || hypfunction > 12) || floor(hypfunction) != hypfunction) {
					std::cout << std::endl;
					std::cerr << "Invalid input!" << std::endl;
					std::cout << std::endl;
					continue;
				}

				std::cout << std::endl;

				double n;

				do {
					std::cout << "Enter a number: ";
					std::cin >> n;

					std::cout << std::endl;

					if (hypfunction == 1) {
						std::cout << "The result is: ";
						std::cout << sinh(n);
					}
					else if (hypfunction == 2) {
						std::cout << "The result is: ";
						std::cout << cosh(n);
					}
					else if (hypfunction == 3) {
						std::cout << "The result is: ";
						std::cout << tanh(n);
					}
					else if (hypfunction == 4) {
						std::cout << "The result is: ";
						std::cout << arcsinh(n);
					}
					else if (hypfunction == 5) {
						if (n < 1) {
							std::cout << "The result is undefined!" << std::endl;
						}
						else {
							std::cout << "The result is: ";
							std::cout << arccosh(n);
						}
					}
					else if (hypfunction == 6) {
						if (n <= -1 || n >= 1) {
							std::cout << "The result is undefined!" << std::endl;
						}
						else {
							std::cout << "The result is: ";
							std::cout << arctanh(n);
						}
					}
					else if (hypfunction == 7) {
						if (n == 0) {
							std::cout << "The result is undefined!" << std::endl;
						}
						else {
							std::cout << "The result is: ";
							std::cout << csch(n);
						}
					}
					else if (hypfunction == 8) {
						std::cout << "The result is: ";
						std::cout << sech(n);
					}
					else if (hypfunction == 9) {
						if (n == 0) {
							std::cout << "The result is undefined!" << std::endl;
						}
						else {
							std::cout << "The result is: ";
							std::cout << coth(n);
						}
					}
					else if (hypfunction == 10) {
						if (n == 0) {
							std::cout << "The result is undefined!" << std::endl;
						}
						else {
							std::cout << "The result is: ";
							std::cout << arccsch(n);
						}
					}
					else if (hypfunction == 11) {
						if (n <= 0 || n > 1) {
							std::cout << "The result is undefined!" << std::endl;
						}
						else {
							std::cout << "The result is: ";
							std::cout << arcsech(n);
						}
					}
					else if (hypfunction == 12) {
						if (n >= -1 && n <= 1) {
							std::cout << "The result is undefined!" << std::endl;
						}
						else {
							std::cout << "The result is ";
							std::cout << arccoth(n);
						}
					}

				} while ((hypfunction == 5 && n < 1) || (hypfunction == 6 && (n <= -1 || n >= 1)) || ((hypfunction == 7 || hypfunction == 9 || hypfunction == 10) && n == 0) || (hypfunction == 11 && (n <= 0 || n > 1)) || (hypfunction == 12 && (n >= -1 && n <= 1)));

				std::cout << std::endl;

				
			} while (((hypfunction < 1 || hypfunction > 12) || floor(hypfunction) != hypfunction));
		} 
		else {
			std::cout << "Invalid input!" << std::endl;
		}

		std::cout << std::endl;
	}
}