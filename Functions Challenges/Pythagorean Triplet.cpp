#include<iostream>

using namespace std;

bool check(int x, int y, int z) {
	//find max of x,y,z and put it in a
	int a = max(x, max(y, z));

	//find rest and put in b and c
	int b, c;
	if (a == x) {
		b = y;
		c = z;
	}
	else if (a == y) {
		b = x;
		c = z;
	}
	else {
		b = x;
		c = y;
	}

	return (a * a) == (b * b) + (c * c);
}

int main() {
	int x, y, z;

	cin >> x >> y >> z;

	if (check(x, y, z)) {
		cout << "Pythagorean Triplet" << endl;
	}
	else {
		cout << "Not a Pythagorean Triplet" << endl;
	}

	return 0;
}