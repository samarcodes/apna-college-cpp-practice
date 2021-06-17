#include<iostream>

using namespace std;

int binarySearch(int a[], int n, int keyToSearch) {
	int low = 0;
	int high = n - 1;

	while (low < high) {
		int mid = low + ((high - low) / 2);

		if (keyToSearch == a[mid]) {
			return mid;
		}
		else if (keyToSearch < a[mid]) {
			high = mid - 1;
		}
		else {
			low = mid + 1;
		}
	}
}

int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int keyToSearch;
	cin >> keyToSearch;

	cout << binarySearch(a, n, keyToSearch) << endl;

	return 0;
}