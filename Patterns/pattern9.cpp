/*
0-1 Pattern

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

*/

#include<iostream>

using namespace std;

int main() {
	int n;

	cout << "enter n: ";
	cin >> n;

	// int no_to_print;

	// for (int i = 0; i < n; i++) {
	// 	if (i % 2 == 0) {
	// 		no_to_print = 1;
	// 	}
	// 	else {
	// 		no_to_print = 0;
	// 	}
	// 	for (int j = 0; j < i + 1; j++) {
	// 		cout << no_to_print << " ";
	// 		no_to_print = !no_to_print;
	// 	}
	// 	cout << endl;
	// }

	//or
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < i + 1; j++) {
			if ((i + j) % 2 == 0) {
				cout << "1 ";
			}
			else {
				cout << "0 ";
			}
		}
		cout << endl;
	}

	return 0;
}