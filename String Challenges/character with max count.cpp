#include<iostream>
#include<string>

using namespace std;

int main() {
	string str;
	cin >> str;

	int hash[26];
	for (int i = 0; i < 26; i++) {
		hash[i] = 0;
	}

	for (int i = 0; i < str.length(); i++) {
		hash[str[i] - 97]++;
	}

	int maxCount = hash[0];
	char charWithMaxCount = 'a';
	for (int i = 1; i < 26; i++) {
		if (hash[i] > maxCount) {
			maxCount = hash[i];
			charWithMaxCount = i + 97;
		}
	}

	cout << charWithMaxCount << ": " << maxCount << endl;

	return 0;
}