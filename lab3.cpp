#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
#include <new>

int q = 0, N = 0;
void Array();

int **A;

using namespace std;

int main() {

	setlocale(0, "");
	do {
		cout << "Enter the number <10" << endl;
		cin >> N;
	} while (N > 10);


	A = new int *[N];
	for (int x = 0; x < N; x++) {
		A[x] = new int[N];
	}

	int n = N;

	for (int x = 0; x < n;) {
		for (int y = x; y< n; ++y) {
			q++;
			A[x][y] = q;

		}
		for (int y = x + 1; y < n; ++y) {
			q++;
			A[y][n - 1] = q;

		}
		--n;
		for (int y = n - 1; y >= x; --y) {
			q++;
			A[n][y] = q;

		}
		++x;
		for (int y = n - 1; y >= x; --y) {
			q++;
			A[y][x - 1] = q;

		}
	}

	Array();
	system("pause");
	return 0;
}

void Array() {
	for (int x = 0; x < N; x++) {
		cout << endl;
		for (int y = 0; y < N; y++) {
			cout << setw(4) << A[x][y];
		}
		cout << endl;
	}
}
