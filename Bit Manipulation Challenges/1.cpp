//WAP to find a unique number in an array,
//where all numbers are unique except one, are present twice

#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int xorNo = 0;
	for (int i = 0; i < n; i++) {
		xorNo ^= a[i];
	}

	cout << xorNo << endl;

	return 0;
}