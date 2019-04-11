#include <iostream>

using namespace std;

const int a = 3;

int main(){
	
	if (a != 3) {
		cout << "ERROR: a != 3\n";
		return 0;
	}

	cout << "Vvedite 1 matrix:\n";
	int mat1[a][a];
	for (int i = 0; i < a; i++){
		for (int j = 0; j < a; j++)
			cin >> mat1[i][j];
	}
	cout << "\n";

	cout << "Vvedite 2 matrix:\n";
	int mat2[a][a];
	for (int i = 0; i < a; i++){
		for (int j = 0; j < a; j++)
			cin >> mat2[i][j];
	}
	cout << "\n";

	cout << "Proizvedenie matrix:\n";
	int mat3[a][a];
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			mat3[i][j] = 0;
			for (int k = 0; k < a; k++) {
				mat3[i][j] += mat1[i][k] * mat2[k][j];
			}
			cout << mat3[i][j] << " ";
		}
	}
	return 0;
}