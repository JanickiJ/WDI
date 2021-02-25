#include <iostream>
using namespace std;

const int N = 8;

bool warunek(int tab[N][N], int w, int k) {
	while (tab[N-1][N-1] > 10) {
		tab[N-1][N-1] /= 10;
	}
	if ((tab[w][k] % 10) < tab[N-1][N-1]) {
		return true;
	}
	return false;
}

bool krol(int tab[N][N], int w, int k) {
	if (w == N-1 && k == N-1) {
		return true;
	}
	else if(warunek(tab,w,k)){
		if (w < N - 1 && k< N-1) {
			return (krol(tab,w+1,k+1)|| krol(tab,w+1,k) || krol(tab,w,k+1));
		}
		else if (w == N-1) {
			return krol(tab, w, k + 1);
		}
		else if (k == N-1) {
			return krol(tab,w+1,k);
		}
	}
	return false;
}

int main() {
	int tab[N][N] = { {1,2,3,4,5,6,7,8}, {1,2,3,4,5,6,7,8}, {1,2,3,4,5,6,7,8}, {1,2,3,4,5,6,7,8}, {1,2,3,4,5,6,7,8}, {1,2,3,4,5,6,7,8}, {1,2,3,4,5,6,7,8}, {1,2,3,4,5,6,7,1} };
	cout << krol(tab, 0, 0);
}