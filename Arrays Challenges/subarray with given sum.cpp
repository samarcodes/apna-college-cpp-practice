#include<iostream>

using namespace std;

int main() {
	int n, S;
	cin >> n >> S;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int i = 0, j = 0, st = 0, end = 0, sum = 0;

	while (j < n) {
		while (sum < S) {
			sum += a[j];
			j++;
		}

		if (sum == S) {
			st = i + 1;
			end = j;
			cout << st << " " << end << endl;
			return 0;
		}

		while (sum > S) {
			sum -= a[i];
			i++;
		}

		if (sum == S) {
			st = i + 1;
			end = j;
			cout << st << " " << end << endl;
			return 0;
		}
	}

	return 0;
}