#include <iostream>
using namespace std;

const int N = 5;

bool odwaz(int t[N], int waga,int odwaznik) {
	if (waga == 0) {
		return true;
	}
	if (waga < 0 || odwaznik>5) {
		return false;
	}
	
	return (odwaz(t, waga, odwaznik + 1) || odwaz(t, waga - t[odwaznik], odwaznik + 1));
	
}

int main() {
	int tab[N] = { 2,3,10,15,20 };
	cout<< odwaz(tab, 18, 0 );
}