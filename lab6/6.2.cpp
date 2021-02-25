#include <iostream>
using namespace std;

const int N = 5;

bool odwaz(int t[N], int waga, int odwaznik) {
	if (waga == 0) {
		return true;
	}
	for (int i = odwaznik; i < N; i++) {
		if (odwaz(t, waga - t[i], i + 1)) {
			cout << "Na lewa strone: " << t[i] << endl;
			return true;
		}
		if (odwaz(t, waga + t[i], i + 1)) {
			cout << "Na prawa strone: -" << t[i] << endl;
			return true;
		}
	}
	return false;
}

int main() {
	int tab[N] = { 30,3,10,15,20 };
	cout << odwaz(tab, 12, 0);
}