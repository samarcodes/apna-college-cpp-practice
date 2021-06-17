#include<iostream>

using namespace std;

void bubbleSort(int a[], int n) {
	int counter = 1;
	bool isSorted = true;

	while (counter < n) {
		for (int i = 0; i < n - counter; i++) {
			if (a[i] > a[i + 1]) {
				isSorted = false;
				swap(a[i], a[i + 1]);
			}
			else {
				isSorted = true;
			}
		}
		if (isSorted) {
			return;
		}
		counter++;
	}
}

int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	bubbleSort(a, n);

	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;

	return 0;
}