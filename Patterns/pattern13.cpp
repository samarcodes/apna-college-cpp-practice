/*
Star Pattern

n = 4

      *
    * * *
  * * * * *
* * * * * * *
* * * * * * *
  * * * * *
    * * *
      *

*/

#include<iostream>

using namespace std;

int main() {
	int n;

	cout << "enter n: ";
	cin >> n;

	//upper half
	for (int i = 0; i < n; i++) {
		for (int space = 0; space < n - i - 1; space++) {
			cout << "  ";
		}
		for (int j = 0; j < 2 * (i + 1) - 1; j++) {
			cout << "* ";
		}
		cout << endl;
	}
	//lower half
	for (int i = n - 1; i >= 0; i--) {
		for (int space = 0; space < n - i - 1; space++) {
			cout << "  ";
		}
		for (int j = 0; j < 2 * (i + 1) - 1; j++) {
			cout << "* ";
		}
		cout << endl;
	}

	return 0;
}