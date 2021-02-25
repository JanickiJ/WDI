#include <iostream>
using namespace std;

const int N = 5;

void odwaz(int t[N], int waga, int odwaznik) {

	if (waga == 0) {
		cout << "1" << endl;
		return;
		
	}
	if (waga > 0 && odwaznik < 5) {
		odwaz(t, waga + t[odwaznik], odwaznik + 1);
		odwaz(t, waga, odwaznik + 1);
		odwaz(t, waga - t[odwaznik], odwaznik + 1);
		
	}
	
}

int main() {
	int tab[N] = { 999,3,9999,15,99 };
	odwaz(tab, 12, 0);
}