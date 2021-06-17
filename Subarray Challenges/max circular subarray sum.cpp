#include<iostream>
#include<climits>

using namespace std;

int kadaneAlgo(int a[], int n) {
	int currSum = 0;
	int maxSum = INT_MIN;

	for (int i = 0; i < n; i++) {
		currSum += a[i];
		maxSum = max(maxSum, currSum);
		if (currSum < 0) {
			currSum = 0;
		}
	}

	return maxSum;
}

void invertArray(int a[], int n) {
	for (int i = 0; i < n; i++) {
		a[i] *= -1;
	}
}

int arraySum(int a[], int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i];
	}
	return sum;
}

int main() {
	int n;
	cin >> n;

	int a[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}

	int noWrapSum = kadaneAlgo(a, n);

	int totalSum = arraySum(a, n);
	invertArray(a, n);

	int wrapSum = kadaneAlgo(a, n);
	invertArray(a, n);

	cout << max(noWrapSum, totalSum + wrapSum) << endl;

	return 0;
}