#include <iostream> 
using namespace std;

const int N = 3;
bool czy_fib(int x) {
	int c = 0;
	int a=0,b=1;
	while (c < x) {
		c = a + b;
		a = b;
		b = c;
	}
	if (c == x) {
		return true;
	}
	return false;
}

//sppjny podciag fib
//GASIENICA

int podciag(int tab[N], int x) {
	
	int sumy[N + 1];
	int s = 0;
	sumy[0] = s;
	for (int i = 0; i < N ; i++) {
		s += tab[i];
		sumy[i+1] = s;
	}

	int p = 1, k = 0;
	int suma;
	int dlugosc;
	int dlugosc_min = N;
	while (p < N + 1 ) {
		suma = sumy[p] - sumy[k];
	
		if (suma == x) {
			dlugosc = p - k;
			if (dlugosc_min > dlugosc) {
				dlugosc_min = dlugosc;
			}
			p++;
		}
		else if (suma < x) {
			p++;
		}
		else if (suma > x) {
			k++;
		}

		if (k == p) {
			p++;
		}
	}
	return dlugosc_min;
}


void tabfib(int tab[N]) {
	tab[0] = 0;
	tab[1] = 1;
	for (int i = 2; i < 10; i++) {
		tab[i] = tab[i - 1] + tab[i - 2];
	}
	
}

bool iloczyn_2_fib(int x) {
	int tab[N];
	tabfib(tab);

	if (x == 0) {
		return true;
	}

	for (int i = 1; tab[i] <= sqrt(x); i++) {
		for (int j = i + 1; tab[i] * tab[j] <= x; j++) {
			if (tab[i] * tab[j] == x) {
				return true;
			}
		}
	}
	return false;
 }


int skreslenie(int x, int nowyx,int pow){
	if (x == 0) {
		if (nowyx % 7 == 0) {
			//cout << nowyx << endl;
			return 1;
		}
		else {
			return 0;
		}
	}
	else {
		int y = x % 10;
		return (skreslenie(x / 10, nowyx + pow * y, pow * 10) + skreslenie(x / 10, nowyx, pow));
	}
}


int najdluzyszy(int tab[N]) {
	int len;
	int max_len = 1;
	
	for (int i = 0; i < N-1; i++) {
		int q = tab[i + 1] / tab[i];
		len = 1;
		while (i < N - 1 && q * tab[i] == tab[i + 1]){
			len++;
			i++;
		}
		if (max_len < len) {
			max_len = len;
		}

	}
	return max_len;
}

bool pojedyncze_czynniki(int x) {
	for (int i = 2; i <= sqrt(x); i++) {
		int suma = 0;
		if (x % i == 0) {
			x /= i;
			suma++;
		}
		if (x % i == 0) {
			suma++;
		}

		if (suma > 1) {
			return false;
		}
	}
	return true;
}

int rosnacy(int tab[N]) {
	int len;
	int len_max = 0;
	for (int i = 0; i < N; i++) {
		len = 0;
		int iloczyn=tab[i];
		while (i<N && pojedyncze_czynniki(iloczyn)) {
			i++;
			len++;
			iloczyn*= tab[i + 1];
		}
		if (len_max < len) {
			len_max = len;
		}
	}
	return len_max;
}

void zerowanie(int tab[N]) {
	for (int i = 0; i < N; i++) {
		tab[i] = 0;
	}
}

int najwiekszy(int tab[N][N]) {
	int wiersze[N];
	int kolumny[N];
	zerowanie(wiersze);
	zerowanie(kolumny);

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			wiersze[i] += tab[i][j];
			kolumny[i] += tab[j][i];
		}
	}

	int max_iloraz = 0;
	int iloraz;
	int max_k;
	int max_w;
	
	for (int i = 0; i < N; i++){
		for (int j = 0; j < N; j++) {
			iloraz = kolumny[j] / wiersze[i];
			if (max_iloraz < iloraz) {
				max_iloraz = iloraz;
				max_k = j;
				max_w = i;
			}
		}
	}
	cout << max_w << "  " << max_k << endl;
	return 1;

}

int main() {
	int tab[N][N] = { {1,1,1}, {1, 1, 1}, {2, 3, 4} };
	cout <<najwiekszy(tab)<< endl;
}
