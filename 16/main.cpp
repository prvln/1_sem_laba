#include "complex.h"

int main(int argc, char* argv[])
{
	Complex a, b, c, d;
	double mod, arg;
	char operation;
	cout << "Vvedite compleksnoe chislo:\n";
	cout << "Vvedite REAL: ";
	cin >> a.real;
	cout << "Vvedite IMAG: ";
	cin >> a.imag;
	d.real = a.real;
	d.imag = a.imag;

	cout << "\n";

	cout << "Dlya spravki press 'h'.\nDlya vihoda press 'e'\n";
	for (;;)
	{
		cout << "Vvedite operation:\n";
		cin >> operation;

		switch (operation)
		{
		case '+':
			cout << "Vvedite 2 complex chislo:\n";
			cout << "Vvedite REAL: ";
			cin >> b.real;
			cout << "Vvedite IMAG: ";
			cin >> b.imag;
			c = add(&d, &b);
			cout << c.real << " + i*(" << c.imag << ")\n";
			break;
		case '*':
			cout << "Vvedite 2 complex chislo:\n";
			cout << "Vvedite REAL: ";
			cin >> b.real;
			cout << "Vvedite IMAG: ";
			cin	>> b.imag;
			c = multiplex(&d, &b);
			cout << c.real << " + i*(" << c.imag << ")\n";
			break;
		case '/':
			cout << "Vvedite 2 complex chislo:\n";
			cout << "Vvedite REAL: ";
			cin >> b.real;
			cout << "Vvedite IMAG: ";
			cin >> b.imag;
			c = divide(&d, &b);
			cout << c.real << " + i*(" << c.imag << ")\n";
			break;
		case 'm':
			mod = module(&d);
			cout << mod << endl;
			break;
		case 'c':
			c = conjugate(&d);
			cout << c.real << " + i*(" << c.imag << ")\n";
			break;
		case 't':
			trigoForm(&d);
			break;
		case 'd':
			degForm(&d);
			break;
		case 'a':
			arg = argument(&d);
			cout << arg << endl;
			break;
		case 'i':
			cout << "Vvedite new chislo:\n";
			cout << "Vvedite REAL: ";
			cin >> d.real;
			cout << "Vvedite IMAG: ";
			cin >> d.imag;
			cout << endl;
			break;
		case 'h':
			cout << "Kind of operations:\n Slojenie: print '+'\n\n Umnojenie: print '*'\n\n Delenie: print'/'\n\n Argument chisla: print 'a'\n\n Module: print 'm'\n\n Sopryadjonnoe chislo: print 'c'\n\n Pokazatelnaya forma: print 'd'\n\n Trigonometricheskaya forma: print 't'\n\n Change chislo: print 'i'\n\n Exit: print 'e'\n\n";
			break;
		case 'e':
			cout << "Exit\n";
			break;
		default:
			cout << "NONAME OPERATION!!!‚\n";
			break;
		}

		if (operation == 'e')
		{
			break;
		}
	}

	return 0;
}
