#include <iostream>
using namespace std;

bool pierwsza(int x) {
	if (x == 0 || x==1) {
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

int zliczanie(int x, int y, int nowa, int pow) {
	if (x == 0 && y == 0) {
		if (pierwsza(nowa)) {
			cout << nowa<<endl;
			return 1;
		}
		else {
			return 0;
		}
	}
	else if (x > 0 && y > 0) {
		return (zliczanie(x / 10, y, nowa + x % 10 * pow, pow * 10) + zliczanie(x, y / 10, nowa + y % 10 * pow, pow * 10));
	}
	else if (y == 0) {
		zliczanie(x / 10, y, nowa + x % 10 * pow, pow * 10);
	}
	else if (x == 0) {
		zliczanie(x, y / 10, nowa + y % 10 * pow, pow * 10);
	}
}

int main() {
	cout << zliczanie(77, 111, 0, 1);

}