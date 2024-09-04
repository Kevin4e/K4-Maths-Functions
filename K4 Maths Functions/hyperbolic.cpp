#define _USE_MATH_DEFINES

#include "..\includes\hyperbolic.h"
#include <cmath>

// Hyperbolic functions

double sinh_rad(double angle) {
	return sinh(angle);
}
double cosh_rad(double angle) {
	return cosh(angle);
}
double tanh_rad(double angle) {
	return tanh(angle);
}

double sinh_deg(double angle) {
	return sinh( (angle * M_PI) / 180);
}
double cosh_deg(double angle) {
	return cosh( (angle * M_PI) / 180);
}
double tanh_deg(double angle) {
	return tanh( (angle * M_PI) / 180);
}

double sinh_grad(double angle) {
	return sinh( (angle * M_PI) / 200);
}
double cosh_grad(double angle) {
	return cosh( (angle * M_PI) / 200);
}
double tanh_grad(double angle) {
	return tanh( (angle * M_PI) / 200);
}


// Inverse hyperbolic functions

double csch_rad(double angle) {
	return 1 / sinh(angle);
}
double sech_rad(double angle) {
	return 1 / cosh(angle);
}
double coth_rad(double angle) {
	return 1 / tanh(angle);
}

double csch_deg(double angle) {
	return 1 / sinh( (angle * M_PI) / 180);
}
double sech_deg(double angle) {
	return 1 / cosh( (angle * M_PI) / 180);
}
double coth_deg(double angle) {
	return 1 / tanh( (angle * M_PI) / 180);
}

double csch_grad(double angle) {
	return 1 / sinh( (angle * M_PI) / 200);
}
double sech_grad(double angle) {
	return 1 / cosh( (angle * M_PI) / 200);
}
double coth_grad(double angle) {
	return 1 / tanh( (angle * M_PI) / 200);
}