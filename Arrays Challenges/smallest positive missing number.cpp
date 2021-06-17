#include<iostream>

using namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int N = 1000;
	bool hash[N];
	for (int i = 0; i < N; i++) {
		hash[i] = false;
	}

	for (int i = 0; i < n; i++) {
		if (a[i] >= 0) {
			if (!hash[a[i]]) {
				hash[a[i]] = true;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		if (!hash[i]) {
			cout << i << endl;
			break;
		}
	}

	return 0;
}