#include<iostream>

using namespace std;

int fact(int n) {
	int factorial = 1;
	for (int i = 2; i <= n; i++) {
		factorial *= i;
	}
	return factorial;
}

int calculateNCR(int n, int r) {
	return fact(n) / (fact(n - r) * fact(r));
}

int main() {
	int n, r;

	//input n
	cin >> n >> r;

	int ans = calculateNCR(n, r);

	cout << n << "C" << r << " = " << ans << endl;

	return 0;
}