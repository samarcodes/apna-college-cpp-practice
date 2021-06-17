#include<iostream>

using namespace std;

int linearSearch(int a[], int n, int key) {
	for (int i = 0; i < n; i++) {
		if (key == a[i]) {
			return i;
		}
	}
	return -1;
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

	cout << linearSearch(a, n, keyToSearch) << endl;

	return 0;
}