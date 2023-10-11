#include <iostream>
using namespace std;

int main() {
	int n = 1;
	string s;

	getline(cin, s);

	if (s.length() == 1 && s[0] == ' ') {
		cout << 0;
		return 0;
	}

	for (int i = 1; i < s.length() - 1; i++) {
		if (s[i] == ' ') n++;
	}

	cout << n;
}