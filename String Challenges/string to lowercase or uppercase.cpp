#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

string toLowerCase(string str) {
	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] += 32;
		}
	}
	return str;
}

string toUpperCase(string str) {
	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] -= 32;
		}
	}
	return str;
}

string lowerToUpperAndVV(string str) {
	for (int i = 0; i < str.length(); i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] -= 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] += 32;
		}
	}

	return str;
}

int main() {
	string str;
	cin >> str;

	//this is inbuilt way to convert to lower case
	// transform(str.begin(), str.end(), str.begin(), ::tolower);
	// cout << str << endl;
	cout << toLowerCase(str) << endl;

	//this is inbuilt way to convert to upper case
	// transform(str.begin(), str.end(), str.begin(), ::toupper);
	// cout << str << endl;
	cout << toUpperCase(str) << endl;

	cout << lowerToUpperAndVV(str) << endl;

	return 0;
}