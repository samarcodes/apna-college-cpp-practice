/*
Palindromic Pattern

        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5

*/

#include<iostream>

using namespace std;

int main() {
	int n;

	cout << "enter n: ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		//print spaces
		for (int space = 0; space < n - i - 1; space++) {
			cout << "  ";
		}
		//print decreasing numbers
		for (int j = i + 1; j >= 1; j--) {
			cout << j << " ";
		}
		//print increasing numbers
		for (int j = 0; j < i; j++) {
			cout << j + 2 << " ";
		}
		cout << endl;
	}

	return 0;
}