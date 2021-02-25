/*2015 / 2016 - Kartkówka 2 - Grupa A - Zad. 1
Dane są trzy operacje na liczbach naturalnych oznaczone literami A, B, C.

A.jeżeli liczba posiada co najmniej 2 cyfry zamienia miejscami dwie ostatnie cyfry w liczbie;
B.mnoży liczbę przez 3;
C.jeżeli liczba posiada co najmniej 2 cyfry usuwa pierwszą cyfrę z liczby.

Proszę napisać funkcję, która szuka sekwencji operacji przekształcającej liczbę
naturalną x na y(x != y) o długości nie większej niż 7. Do funkcji należy
przekazać liczby x, y.Funkcja powinna zwrócić napis złożony z liter ABC
realizujący przekształcenie albo łańcuch pusty, jeżeli przekształcenie nie
istnieje.Na przykład dla liczb 6, 3 funkcja powinna zwrócić napis "BACB".*/
#include <iostream>
using namespace std;

int zamiana(int x) {
	int a = x % 10;
	x /= 10;
	int b = x % 10;
	x /= 10;
	x = x + 10 * a + b;
	return x;
}

int usun1liczbe(int x) {
	int len = 1;
	while (x > 0) {
		len*10;
		x /= 10;
	}
	return x % len;
}


string operacje(int x, int y, string wynik,int i) {
	if (x == y) {
		return wynik;
	}

	else if(i<7){
		if (x / 10 > 0) {
			return (operacje(zamiana(x), y, wynik + "A",i+1) + operacje(usun1liczbe(x), y, wynik + "C",i+1));
		}
		return operacje(x * 3, y, wynik + "B",i+1);

	}
}

int main() {
	string wynik ="";
	cout << operacje(3, 6,wynik,0);
}