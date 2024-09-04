#ifndef TRIGONOEMETRY_H
#define TRIGONOMETRY_H

// Trigonometric functions
double sin_rad(double angle);
double cos_rad(double angle);
double tan_rad(double angle);

double sin_deg(double angle);
double cos_deg(double angle);
double tan_deg(double angle);

double sin_grad(double angle);
double cos_grad(double angle);
double tan_grad(double angle);


// Inverse trigonometric functions
double arcsin_rad(double n);
double arccos_rad(double n);
double arctan_rad(double n);

double arcsin_deg(double n);
double arccos_deg(double n);
double arctan_deg(double n);

double arcsin_grad(double n);
double arccos_grad(double n);
double arctan_grad(double n);


// Reciprocal trigonometric functions
double csc_rad(double angle);
double sec_rad(double angle);
double cot_rad(double angle);

double csc_deg(double angle);
double sec_deg(double angle);
double cot_deg(double angle);

double csc_grad(double angle);
double sec_grad(double angle);
double cot_grad(double angle);


// Inverse reciprocal trigonometric functions
double arccsc_rad(double n);
double arcsec_rad(double n);
double arccot_rad(double n);

double arccsc_deg(double n);
double arcsec_deg(double n);
double arccot_deg(double n);

double arccsc_grad(double n);
double arcsec_grad(double n);
double arccot_grad(double n);

#endif // TRIGONOEMTRY_H