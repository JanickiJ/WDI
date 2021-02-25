//2009 / 2010 - Kolokwium końcowe - Zad. 2 (28 stycznia 2010)
//Dany jest zbiór N liczb naturalnych umieszczony w tablicy int tab[N].
//Proszę napisać funkcję, która zwraca informację, 
//czy jest możliwy podział zbioru N liczb na trzy podzbiory,
//tak aby w każdym podzbiorze, 
//łączna liczba jedynek użyta do zapisu elementów
//tego podzbioru w systemie dwójkowym była jednakowa.

#include <iostream>
using namespace std;

int ilosc_jedynek(int x) {
	int jedynki = 0;
	while (x > 0) {
		if (x % 2 == 1) {
			jedynki++;
		}
		x /= 2;
	}
	return jedynki;
}


int podzial(int* t, int N, int ile1, int ile2, int ile3, int idx) {
	if (idx == N ) {
		if (ile1 == ile2 && ile2 == ile3) {
			return 1;
		}
		else {
			return 0;
		}
	}
	else {
		int x = ilosc_jedynek(t[idx]);
		return (podzial(t, N, ile1 + x, ile2, ile3, idx + 1) +
			podzial(t, N, ile1, ile2 + x, ile3, idx + 1) +
			podzial(t, N, ile1, ile2, ile3 + x, idx + 1));
	}
}

int main() {
	int t[5] = { 2,3,5,7,15 };
	cout << podzial(t, 5, 0, 0, 0, 0);

}