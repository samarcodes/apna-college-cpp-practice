#include<iostream>
#include<climits>

using namespace std;

//brute force
int maxSubarraySum1(int a[], int n) {
	int maxSum = INT_MIN;
	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			int sum = 0;
			for (int k = i; k <= j; k++) {
				sum += a[k];
			}
			maxSum = max(maxSum, sum);
		}
	}
	return maxSum;
}

//cumulative sum approach
int maxSubarraySum2(int a[], int n) {
	int csum[n];
	csum[0] = a[0];
	for (int i = 1; i < n; i++) {
		csum[i] = a[i] + csum[i - 1];
	}

	int maxSum = csum[0];
	for (int i = 0; i < n - 1; i++) {
		int sum = 0;
		for (int j = i + 1; j < n; j++) {
			sum = csum[j] - csum[i];
			maxSum = max(maxSum, sum);
		}
	}

	return maxSum;
}

//kadane's algo
int maxSubarraySum3(int a[], int n) {
	int cs = 0;
	int ms = INT_MIN;

	for (int i = 0; i < n; i++) {
		cs += a[i];
		ms = max(ms, cs);
		if (cs < 0) {
			cs = 0;
		}
	}

	return ms;
}

int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	cout << maxSubarraySum1(a, n) << endl;
	cout << maxSubarraySum2(a, n) << endl;
	cout << maxSubarraySum3(a, n) << endl;

	return 0;
}