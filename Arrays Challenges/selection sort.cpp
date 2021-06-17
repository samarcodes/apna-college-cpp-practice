#include<iostream>

using namespace std;

int findMinNumberIndex(int a[], int n, int start) {
	int minIndex = start;
	for (int i = start + 1; i < n; i++) {
		if (a[i] < a[minIndex]) {
			minIndex = i;
		}
	}
	return minIndex;
}

void selectionSort(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		int minNumberIndex = findMinNumberIndex(a, n, i);
		swap(a[i], a[minNumberIndex]);
	}
}

int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	selectionSort(a, n);

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}