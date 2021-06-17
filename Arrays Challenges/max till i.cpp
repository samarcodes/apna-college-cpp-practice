#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int index;
	cin >> index;

	int maxElement = a[0];
	for (int i = 1; i <= index; i++) {
		maxElement = max(a[i], maxElement);
	}

	cout << maxElement << endl;

	return 0;
}