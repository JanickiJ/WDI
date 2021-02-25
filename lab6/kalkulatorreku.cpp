#include <iostream>
using namespace std;

int kalk(int n) {
	if (n == 0 || n == 1 || n == 2) {
		return 1;
	}
	if (n % 3 == 0) {
		return kalk(n - 1) + kalk(n - 2);
	}
	if (n % 3 == 1) {
		return 5 * kalk(n - 1) + 4;
	}
	if (n % 3 == 2) {
		return kalk(n - 1);
	}
}

int kalk1(int n, int m) {
	
	if (n == 0) {
		return m;
	}
	if (m == 0) {
		return n;
	}
	else {
		return kalk1(n - 1, m) + kalk1(n, m - 1) + kalk1(n - 1, m - 1);
	}
}