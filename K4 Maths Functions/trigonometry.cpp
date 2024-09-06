#define _USE_MATH_DEFINES

#include "..\includes\trigonometry.h"
#include <cmath>

// Trigonometric functions

double sin_rad(double angle) {
	return sin(angle);
}
double cos_rad(double angle) {
	return cos(angle);
}
double tan_rad(double angle) {
	return tan(angle);
}

double sin_deg(double angle) {
	return sin( (angle * M_PI) / 180);
}
double cos_deg(double angle) {
	return cos( (angle * M_PI) / 180);
}
double tan_deg(double angle) {
	return tan( (angle * M_PI) / 180);
}

double sin_grad(double angle) {
	return sin( (angle * M_PI) / 200);
}
double cos_grad(double angle) {
	return cos( (angle * M_PI) / 200);
}
double tan_grad(double angle) {
	return tan( (angle * M_PI) / 200);
}


// Inverse trigonometric functions

double arcsin_rad(double n) {
	return asin(n);
}
double arccos_rad(double n) {
	return acos(n);
}
double arctan_rad(double n) {
	return atan(n);
}

double arcsin_deg(double n) {
	return (asin(n) * 180) / M_PI;
}
double arccos_deg(double n) {
	return (acos(n) * 180) / M_PI;
}
double arctan_deg(double n) {
	return (atan(n) * 180) / M_PI;
}

double arcsin_grad(double n) {
	return (asin(n) * 200) / M_PI;
}
double arccos_grad(double n) {
	return (acos(n) * 200) / M_PI;
}
double arctan_grad(double n) {
	return (atan(n) * 200) / M_PI;
}


// Reciprocal trigonometric functions

double csc_rad(double angle) {
	return 1 / sin(angle);
}
double sec_rad(double angle) {
	return 1 / cos(angle);
}
double cot_rad(double angle) {
	return cos(angle) / sin(angle);
}

double csc_deg(double angle) {
	return 1 / sin( (angle * M_PI) / 180);
}
double sec_deg(double angle) {
	return 1 / cos( (angle * M_PI) / 180);
}
double cot_deg(double angle) {
	return cos( (angle * M_PI) / 180) / sin( (angle * M_PI) / 180);
}

double csc_grad(double angle) {
	return 1 / sin( (angle * M_PI) / 200);
}
double sec_grad(double angle) {
	return 1 / cos( (angle * M_PI) / 200);
}
double cot_grad(double angle) {
	return cos( (angle * M_PI) / 200) / sin( (angle * M_PI) / 200);
}


// Inverse reciprocal trigonometric functions

double arccsc_rad(double n) {
	return asin(1 / n);
}
double arcsec_rad(double n) {
	return acos(1 / n);
}
double arccot_rad(double n) {
	return atan(1 / n);
}

double arccsc_deg(double n) {
	return (asin(1 / n) * 180) / M_PI;
}
double arcsec_deg(double n) {
	return (acos(1 / n) * 180) / M_PI;
}
double arccot_deg(double n) {
	return (atan(1 / n) * 180) / M_PI;
}

double arccsc_grad(double n) {
	return (asin(1 / n) * 200) / M_PI;
}
double arcsec_grad(double n) {
	return (acos(1 / n) * 200) / M_PI;
}
double arccot_grad(double n) {
	return (atan(1 / n) * 200) / M_PI;
}
