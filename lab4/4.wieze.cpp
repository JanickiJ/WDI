#include <iostream>
using namespace std;


const int N = 4;
bool iloczynn(int tab[N][N], int x) {
	for (int w = 0; w < N; w++) {
		for (int k = 0; k < N; k++) {
			if (w >= 2 && k < N - 1) {
				if (tab[w][k] * tab[w - 2][k + 1] == x) { return true; }
			}
			if (w >= 2 && k > 0) {
				if (tab[w][k] * tab[w - 2][k -1] == x) { return true; }
			}
			if (w < N - 2 && k < N - 1) {
				if (tab[w][k] * tab[w + 2][k + 1] == x) { return true; }
			}
			if (w < N - 2 && k>0) {
				if (tab[w][k] * tab[w + 2][k - 1] == x) { return true; }
			}
			if (k >= 2 && w < N - 1) {
				if (tab[w][k] * tab[w + 1][k - 2] == x) { return true; }
			}
			if (k >= 2 && w > 0) {
				if (tab[w][k] * tab[w - 1][k - 2] == x) { return true; }
			}
			if (k < N - 2 && w>0) {
				if (tab[w][k] * tab[w - 1][k + 2] == x) { return true; }
			}
			if (k < N - 2 && w < N - 1) {
				if (tab[w][k] * tab[w + 1][k + 2] == x) { return true; }
			}
		}
	}
	return false;
}



int main() {
	int tab[N][N] = { {1,1,1,1}, {1,1,1,1},{1,1,1,1},{1,1,1,1} };
	cout << iloczynn(tab, 3);
}