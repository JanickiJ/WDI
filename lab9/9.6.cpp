#include <iostream>
using namespace std;

int const N = 3;
bool waga(int tab[N],int masa, int licznik=) {
	if (masa == 0) {
		return true;
	}
	return waga(tab, masa-tab[licznik], licznik-1)
}