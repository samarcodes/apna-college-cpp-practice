#include<iostream>

using namespace std;

int binaryToDecimal(int n) {
	int ans = 0;
	//represents powers of two
	int x = 1;

	while (n > 0) {
		int lastDigit = n % 10;
		ans += lastDigit * x;
		x *= 2;
		n /= 10;
	}
	return ans;
}

int main() {
	int n;
	cin >> n;

	cout << binaryToDecimal(n) << endl;

	return 0;
}