#include<iostream>
#include<climits>

using namespace std;

int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	const int N = 100;
	int hash[N];
	for (int i = 0; i < N; i++) {
		hash[i] = -1;
	}

	int minIndex = INT_MAX;
	for (int i = 0; i < n; i++) {
		if (hash[a[i]] == -1) {
			hash[a[i]] = i;
		}
		else {
			minIndex = min(minIndex, hash[a[i]]);
		}
	}

	if (minIndex == INT_MAX) {
		cout << "-1" << endl;
	}
	else {
		cout << minIndex << endl;

	}

	return 0;
}