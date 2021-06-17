#include<iostream>
#include<algorithm>

using namespace std;

int pairSum(int a[], int n, int sumToFind) {
	int low = 0;
	int high = n - 1;

	sort(a, a + n);

	while (low < high) {
		if (a[low] + a[high] == sumToFind) {
			return 1;
		}
		else if (a[low] + a[high] < sumToFind) {
			++low;
		}
		else {
			--high;
		}
	}
	return -1;
}

int main() {
	int n, sumToFind;
	cin >> n >> sumToFind;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cout << pairSum(a, n, sumToFind) << endl;

	return 0;
}