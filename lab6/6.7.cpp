#include <iostream>
using namespace std;

int podzbior(int* t, int N, int suma_el, int suma_idx, int idx) {
	int min = 0;
	if (suma_el>0 && suma_el == suma_idx) {
		if (min>suma_el) {
			min=
		}
	}
	else if (idx == N) {
		return false;
	}
	else {
		podzbior(t, N, suma_el + t[idx], suma_idx + idx, idx + 1);
		podzbior(t, N, suma_el , suma_idx, idx + 1);
	}
}