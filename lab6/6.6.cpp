#include <iostream>
using namespace std;

bool pierwsza(int x) {
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


bool podzial(int* t, int x, int N, int idx, int pow) {
	if (idx == N) {
		if (pierwsza(x)) {
			return true;
		}
		else {
			return false;
		}
	}

	else {
		if (!pierwsza(x)) {
			return podzial(t, x * pow + t[idx], N, idx + 1, pow * 10);
		}
		else {
			return (podzial(t, 0, N, idx + 1,1) ||
				podzial(t, x * pow + t[idx], N, idx + 1,pow*10));
		}
	}

}

int main() {
	int t[6] = { 1,0,1,1,1,1 };
	cout << podzial(t, 0, 6, 0, 1);
}