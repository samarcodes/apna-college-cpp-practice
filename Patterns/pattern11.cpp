/*
Number Pattern

    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5

*/

#include<iostream>

using namespace std;

int main() {
	int n;

	cout << "enter n: ";
	cin >> n;

	for (int i = 0; i < n; i++) {
		for (int space = 0; space < n - i - 1; space++) {
			cout << " ";
		}
		for (int j = 0; j < i + 1; j++) {
			cout << j + 1 << " ";
		}
		cout << endl;
	}

	return 0;
}