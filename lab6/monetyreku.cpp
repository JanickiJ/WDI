#include <iostream>
using namespace std;

const int N = 3;

int makeChange(int coins[N], int change, int i){
if (change < 0) return 0;

if (change == 0) {
	return 1;
}

if (i == N) {
	return 0;
}

return makeChange(coins, change - coins[i], i) + makeChange(coins, change, i + 1);
}



int main() {
	int coins[N] = { 5, 10, 3 };
	cout << makeChange(coins, 30, 0);
}