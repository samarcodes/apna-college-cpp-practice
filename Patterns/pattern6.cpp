/*
Floyd's Triangle
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
*/
#include<iostream>

using namespace std;

int main() {
	int n;

	cout << "enter n: ";
	cin >> n;

	int count = 1;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i + 1; j++) {
			cout << count++ << " ";
		}
		cout << endl;
	}

	return 0;
}