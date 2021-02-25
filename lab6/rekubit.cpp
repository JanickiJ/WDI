#include <iostream>
using namespace std;

const int N = 10;

bool isPrime(int x) {
	if (x == 0 || x == 1) {
		return false;
	}
	if (x == 2) {
		return true;
	}
	if (x % 2 == 0) {
		return false;
	}
	for (int i = 3; i <= sqrt(x); i += 2) {
		if (x % i == 0) {
			return false;
		}
	}
	return true;
}


bool reku(int tab[N],int x) {
	if (x == N - 1) {
		return true;
	}

	bool skok1 = false;
	bool skok2 = false;
	bool skok3 = false;

	if (x < N - 3 && isPrime(tab[x + 3])) {
		skok3 = true;
	}
	if (x < N - 2 && isPrime(tab[x + 2])) {
		skok2 = true;
	}
	if (x < N - 1 && isPrime(tab[x + 1])) {
		skok1 = true;
	}
	
	if (skok3) {
		return reku(tab, x + 3);
	}
	else if (skok2) {
		return reku(tab, x + 2);
	}
	else if (skok1) {
		return reku(tab, x + 1);
	}
	return false;
}

int main() {
	int tab[N] = { 4,3,3,4,4,4,3,3,3,3 };
	cout << reku(tab, 0);
}