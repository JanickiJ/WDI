#include <iostream>
using namespace std;

float pierwiastek(float a)
{
	float x = a;
	float marker;
	marker = x*x - a;
	while(marker > 0.001)
	{
		x = x - ((x*x - a)/(2*x));
		marker = x*x - a;
	}
	return x;
}

int main()
{
	float a;
	cout << "Wpisz liczbe:" << endl;
	cin >> a ;
	cout << "Pierwiastek kwadratowy tej liczby wyznaczony wzorem Newtona to:" << endl;
	cout << pierwiastek(a) << endl;
}
