#include<iostream>
#include<cmath>

using namespace std;

int main() {

	cout << "Vvedite A, B, C: \n";
	double A = 0.0, B = 0.0, C = 0.0, D = 0.0;
	cin >> A >> B >> C;
	double x1 = 0.0, x2 = 0.0;
	if ((B*B - 4 * A*C) > 0 && A != 0) {
		
		D = B * B - 4 * A*C;
			
		x1 = (-1 * B + sqrt(D)) / (2 * A);
		cout << "x1 = " << x1 << endl;
		
		x2 = (-1 * B - sqrt(D)) / (2 * A);
		cout << "x2 = " << x2 << endl;
	}
	else if ((D) == 0) {
		cout << -1 * (B / (2 * A)) << endl;
	}
	else {
		cout << "Net kornei\n";
	}

	return 0;
}
