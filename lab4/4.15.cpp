#include <iostream>
using namespace std;

bool pierwsza(int x) {
	int y;
	while (x > 0) {
		y = x % 10;
		if (y == 3 || y == 5 || y == 7) {
			return true;
		}
		x /= 10;
	}
	return false;
}

const int N = 3;

bool istnieje(int t[N][N]) {
	bool flaga = false;
	for (int i = 0; i < N && !flaga; i++) {
		flaga = true;
		for (int j = 0; j < N && flaga; j++) {
			flaga = pierwsza(t[i][j]);
		}
	}
	return flaga;
}

int main() {
	int tab[N][N] = { {32,22,2}, {22,44,46}, {88,8,8} };
	cout << istnieje(tab);


}