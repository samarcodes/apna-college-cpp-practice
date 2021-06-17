/*
Rhombus Pattern

    *****
   *****
  *****
 *****
*****

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
		for (int j = 0; j < n; j++) {
			cout << "*";
		}
		cout << endl;
	}

	return 0;
}