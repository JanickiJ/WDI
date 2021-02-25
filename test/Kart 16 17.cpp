//2016 / 2017 - Kartkowka 2
//Dana jest liczba naturalna N niezawierająca cyfry 0.
//Mozliwe jest jej dzielenie na dwie liczby tak, aby zachować oryginalną względną kolejnośc cyfr.Np.liczbę 2835 można podzielić na(2, 835), (23, 85), (235, 8) itd.Wszystkie cyfry liczby N muszą być wykorzystane.
//Napisz funkcję które przyjmuje liczbę N, wypisuje wszystkie podziały na liczby względnie pierwsze oraz zwraca liczbę takich podziałów.
//


#include <iostream>
using namespace std;

bool wzglednie_pierwsze(int x, int y){
	if (x == 0 || y == 0) {
		return false;
	}
	while (x != y) {
		if (x > y) {
			x -= y;
		}
		else {
			y -= x;
		}
	}
	if (x == 1) {
		return true;
	}
	return false;
}


int podzial(int x, int x1, int x2, int pow1, int pow2) {
	int y = x % 10;

	if (x==0) {
		if (wzglednie_pierwsze(x1,x2)) {
			cout<<x1<<" "<<x2<<endl;
			return 1;
		}
		else {
			return 0;
		}
	}
	else {
		return (podzial(x / 10, x1+pow1*y , x2, pow1*10, pow2) + podzial(x / 10, x1, x2+pow2*y, pow1, pow2*10));
	}
}


int main() {
	cout<<podzial(733, 0, 0, 1, 1);
}