#include <iostream>
using namespace std;

int waga(int x) {
	int suma = 0;
	for (int i = 2; i < sqrt(x);i++) {
		if (x % i == 0) {
			do{
				x /= i;
			} while (x % i == 0);
			suma++;
		}
		if (x == 1) {
			return suma;
		}
	}
	if (x > 1) {
		return suma + 1;
	}
}

bool freku(int* t, int rozmiar, int waga1, int waga2, int waga3, int idx){
		
	if (rozmiar-idx==1) {
		if (waga1 == waga2 && waga2 == waga3) {
			return true;
		}
		else {
			return false;
		}
	}

	int x;
	if (idx < rozmiar) {
			x = waga(t[idx]);
			return (freku(t, rozmiar, waga1 + x, waga2, waga3, idx + 1) ||
			freku(t, rozmiar, waga1, waga2 + x, waga3, idx + 1) ||
			freku(t, rozmiar, waga1, waga2, waga3 + x, idx + 1));
	}

}

bool czy_pierwsza(int n)
{
	if (n < 2)
		return false; //gdy liczba jest mniejsza niż 2 to nie jest pierwszą

	for (int i = 2; i * i <= n; i++)
		if (n % i == 0)
			return false; //gdy znajdziemy dzielnik, to dana liczba nie jest pierwsza
	return true;
}

bool rownewagi(int* t, int N) {
	return freku(t, N, 0, 0, 0, 0);
}

int main() {
	int t[6] = { 3,3,3,3,3,3 };
	cout << czy_pierwsza(11101);
}
