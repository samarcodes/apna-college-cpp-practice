#include<iostream>
#include<climits>

using namespace std;

int main() {
	int n;
	cin >> n;

	//base condition
	if (n == 1) {
		cout << "1" << endl;
		return 0;
	}

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int mx = INT_MIN;
	int ans = 0;
	for (int i = 0; i < n; i++) {
		if ((i == n - 1 && a[i] > mx) || (a[i] > mx && a[i] > a[i + 1]) ) {
			ans++;
			mx = max(mx, a[i]);
		}
	}

	cout << ans << endl;

	return 0;
}