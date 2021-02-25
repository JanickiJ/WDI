#include <iostream>
using namespace std;

const int N=5;
bool waga(int masa, int tab[N], int licznik) {
	if (masa == 0) {
		return true;
	}

	if (masa > 0 && licznik >= 0) {
		return (waga(masa, tab, licznik-1) || waga(masa - tab[licznik], tab, licznik - 1));
	}

	else {
		return false;
	}
}

bool waga2(int masa, int tab[N], int licznik) {
	if (masa == 0) {
		return true;
	}


	if (licznik>= 0) {
		return (waga2(masa, tab, licznik - 1) || waga2(masa - tab[licznik], tab, licznik - 1) ||
			waga(masa + tab[licznik], tab, licznik - 1));
	}

	else {
		return false;
	}

}

void waga3(int masa, int tab[N], int licznik = N-1) {
	if (masa == 0) {
		return;
	}
	cout << tab[licznik] << endl;


	if (licznik >= 0) {
		 (waga2(masa, tab, licznik - 1) || waga2(masa - tab[licznik], tab, licznik - 1) ||
			waga(masa + tab[licznik], tab, licznik - 1));

	}

}


int main() {
	int tab[N] = { 2,3,10,15,20 };
	waga3(13, tab, N-1);
}
