#include <iostream>

using namespace std;

int a = 3;

int main() {

	if (a != 3){
		cout << "ERROR: a != 3\n";
		return 0;
		}
		
	cout << "Vvedute matrix 3x3:\n";
	int mat[a][a];
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < a; j++) {
			cin >> mat[i][j];
		}
	}
	for (int i = 0; i < a; i++) {
		cout << endl;
		for (int j = 0; j < a; j++) {
			cout << mat[i][j];

		}
	}
	for (int i = 0; i < 3; i++) {
		for (int x = 0; x < 3 / 2; x++)
		{
			for (int y = x; y < 3 - x - 1; y++)
			{
				int temp = mat[x][y];

				mat[x][y] = mat[y][3 - 1 - x];

				mat[y][3 - 1 - x] = mat[3 - 1 - x][3 - 1 - y];

				mat[3 - 1 - x][3 - 1 - y] = mat[3 - 1 - y][x];

				mat[3 - 1 - y][x] = temp;
			}
		}
	}
	cout << "\n\n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
			cout << mat[i][j];
		cout << "\n";
	}

	return 0;
}
