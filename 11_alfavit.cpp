#include <iostream>
#include <string.h>

#define SAIZ 100

using namespace std;

void sort(char ** array, int n) {
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++)
			if (strcmp(array[i], array[j]) > 0)
			{
				char* s = array[i];
				array[i] = array[j];
				array[j] = s;
			}
	}
	return;
}

int main() {
	int n;
	cout << "Input size of array\n\n";
	cin >> n;
	getchar();
	char **array = new char *[n];

	for (int i = 0; i < n; i++) {
		array[i] = new char[SAIZ];
		cin.getline(array[i], SAIZ);
	}
	sort(array, n);
	cout << "Alfavit:\n";
	for (int i = 0; i < n; i++) {
		cout << '\n' << array[i] << '\n';
	}
	cout << '\n';
	for (int i = 0; i < n; i++) {
		delete[]array[i];
	}
	delete[]array;

	return 0;
}