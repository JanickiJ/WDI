#include <iostream>
using namespace std;

int silnia(int i) {
	if (i <= 1) {
		return 1;
	}
	
	return i * silnia(i - 1);
}

int fib(int x) {
	if (x == 0) return 0;
	if (x == 1)	return 1;
	
	return fib(x - 2) + fib(x - 1);
}

void wypiszodndo1(int x) {
	if (x == 1) {
		cout << x;
	}
	else {
		cout << x;
		return wypiszodndo1(x - 1);
	}
	cout<<endl;
}

void wypiszod1don(int x) {
	if (x == 1) {
		cout << x;
	}
	else {
		 wypiszod1don(x - 1);
		cout << x;
		return;
	}
}

string odkonca() {
	string  s;
	cout << "Wprowadz znak";
	cin >> s;
	if (s == "*") {
		return s;
	}
	else {
		return odkonca() + s;
	}
}

int f(int val, int x) {

	if (val == x) {
		return 1;
	}
	else if (val < 10 && val != x) {
		return 0;
	}
	else if (val % 10 == x) {
		return f(val / 10, x) + 1;
	}
	else if (val % 10 != x) {
		return f(val / 10, x);
	}
}

void selectionSort(int* t, int rozmiar, int indx) {
	if (rozmiar - indx == 1) {
		return;
	}
	int min = t[indx];
	int min_indx = indx;
	for (int i = indx+1; i < rozmiar; i++) {
		if (min > t[i]) {
			min = t[i];
			min_indx = i;
		}
	}
	swap(t[indx], t[min_indx]);
	selectionSort(t, rozmiar, indx + 1);

}


int serchnumber(int* t, int p, int k, int val) {
	if (p > k) {
		return -1;
	}
	int m = (p + k) / 2;
	if (t[m] == val) {
		return m;
	}
	if (t[m] > val) {
		return serchnumber(t, p , m - 1, val);
	}
	if (t[m] < val) {
		return serchnumber(t, m + 1, k, val);
	}
}


void swap(int& a, int& b) {
	int c = a;
	a = b;
	b = c;
}

int main(){
	int t[10] = { 6,3,4,8,1,10,3,3,3,4 };
	for (int i = 0; i < 10; i++) {
		cout << t[i] << " ";
	}
	cout << endl;
	selectionSort(t, 10, 0);
	for (int i = 0; i < 10; i++) {
		cout << t[i]<<" ";
	}
	
}
