#include <iostream>
using namespace std;

const int N = 4;
bool kwadraty(int t[N][N],int x) {
	int iloczyn;
	for (int i = 3; i < N; i += 2) {
		for (int j = 0; j + i -1 < N; j++) {
			for (int k = 0; k + i -1 < N; k++) {
				iloczyn = t[j][k] * t[j + i- 1][k + i- 1] * t[j + i - 1][k] * t[j][k + i-1];
				if (iloczyn == x) {
					cout << "dane"<<i << " " << j << " " << k << endl;
					return true;
				}
			}
		}
	}
	return false;
}

int main() {
	int tab[N][N] = { {1,1,1,1} , {1,1,1,1} , {1,1,1,1} , {1,2,3,4} };
	cout << kwadraty(tab, 8) << endl;
}