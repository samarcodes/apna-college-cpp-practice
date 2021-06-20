#include<iostream>

using namespace std;

int setBit(int n, int pos) {
	return ((n & (1 << pos)) != 0);
}

int unique(int a[], int n) {
	int xorSum = 0;
	for (int i = 0; i < n; i++) {
		xorSum ^= a[i];
	}

	//find position of rightmost setBit
	int temp = xorSum;
	int setbit = 0;
	int pos = 0;
	while (setbit != 1) {
		setbit = xorSum & 1;
		pos++;
		xorSum >>= 1;
	}
	pos -= 1;

	//find xos of all nos which have setbit at
	// position found in prev step
	int newXor = 0;
	for (int i = 0; i < n; i++) {
		if (setBit(a[i], pos)) {
			newXor ^= a[i]; //one of the two unique number
		}
	}

	cout << newXor << endl;
	cout << (temp ^ newXor) << endl;
}

int main() {
	int a[] = {1, 2, 3, 1, 2, 3, 5, 7};

	unique(a, 8);

	return 0;
}