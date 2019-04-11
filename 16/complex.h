#pragma once
#include <iostream>
#include <cstdlib>
#include <cmath>

using namespace std;

typedef struct
{
	float real;
	float imag;
} Complex;

void trigoForm(Complex *a);
void degForm(Complex *a);
Complex add(Complex *a, Complex *b);
Complex multiplex(Complex *a, Complex *b);
Complex divide(Complex *a, Complex *b);
double argument(Complex *a);
double module(Complex *a);
Complex conjugate(Complex *a);

