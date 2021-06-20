#include<iostream>

using namespace std;

int getBit(int n, int position) {
	int mask = 1 << position;
	return ((n & mask) != 0);
}

int setBit(int n, int position) {
	int mask = 1 << position;
	return n | mask;
}

int clearBit(int n, int position) {
	int mask = ~(1 << position);
	return n & mask;
}

int main() {
	int n, position;
	cin >> n >> position;

	cout << getBit(n, position) << endl;
	cout << setBit(n, position) << endl;
	cout << clearBit(n, position) << endl;

	return 0;
}