#include "complex.h"

void trigoForm(Complex *a)
{
	double arg = argument(a);
	double mod = module(a);
	cout << mod << "*(cos(" << arg << ") + i*sin(" << arg << ")" << endl;
}

void degForm(Complex *a)
{
	double arg = argument(a);
	double mod = module(a);
	cout << mod << "*e^(" << arg << ")" << endl;
}
Complex add(Complex *a, Complex *b)
{
	Complex c;
	c.real = a->real + b->real;
	c.imag = a->imag + b->imag;
	return c;
}

Complex multiplex(Complex *a, Complex *b)
{
	Complex c;
	c.real = (a->real)*(b->real) - (a->imag)*(b->imag);
	c.imag = (a->real)*(b->imag) + (a->imag)*(b->real);
	return c;
}

Complex divide(Complex *a, Complex *b)
{
	Complex c;
	c.real = ((a->real)*(b->real) + (a->imag)*(b->imag)) / ((b->real)*(b->real) + (b->imag)*(b->imag));
	c.imag = ((a->real)*(b->imag) + (a->imag)*(b->real)) / ((b->real)*(b->real) + (b->imag)*(b->imag));
	return c;
}

double argument(Complex *a)
{
	double arg = atan((a->imag) / (a->real));
	return arg;
}

double module(Complex *a)
{
	double mod = sqrt((a->real)*(a->real) + (a->imag)*(a->imag));
	return mod;
}

Complex conjugate(Complex *a)
{
	Complex c;
	c.real = a->real;
	c.imag = (a->imag)*(-1);
	return c;
}
