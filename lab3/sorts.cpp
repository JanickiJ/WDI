#include <iostream>
using namespace std;


const int N = 10;
void insertsort(int tab[N]) {
	
	for (int i = 1; i <= N - 1; i++) {
		int val = tab[i];
		int len = i;
		while (len > 0 && tab[len - 1] > val) {
			tab[len] = tab[len - 1];
			len--;
		}
		tab[len] = val;
	}
}

void swap(int& xp, int& yp)
{
	int temp = xp;
	xp = yp;
	yp = temp;
}

  
void bubbleSort(int* t, int rozmiar) {
	bool flag = true;
	while (flag) {
		flag = false;
		for (int i = 0; i < rozmiar - 1; i++) {
			if (t[i] > t[i + 1]) {
				swap(t[i], t[i + 1]);
				flag = true;
			}
		}
	}
}


void selectionSort(int *arr, int n)
{
	int i, j, min_idx;
  
	for (i = 0; i < n - 1; i++)
	{ 
		min_idx = i;
		for (j = i + 1; j < n; j++)
			if (arr[j] < arr[min_idx])
				min_idx = j; 
		swap(arr[min_idx], arr[i]);
	}
}

void quickSort(int* tab, int p, int k) {
	int i = p;
	int j = k;
	int key = tab[(p + k) / 2];
		while (i <= j) {
			while (key > tab[i]) i++;
			while (key < tab[j]) j++;
			if (i <= j) {
				swap(tab[i], tab[j]);
				i++;
				j--;
			}
		}
	if(i<k) 
}



int main() {
	int tab[N] = { 6,3,9,0,1,10,7,9,33,10 };
	bubbleSort(tab, N);
	for (int i = 0; i < N; i++) {
		cout <<endl<< tab[i];
	}

}