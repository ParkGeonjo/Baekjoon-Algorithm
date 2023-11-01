#include <iostream>
#include <string>
using namespace std;

int main() {
	int n, count = 0, end = 665;

	cin >> n;

	while (count != n) {
		end++;
		int temp = end;
		while (temp != 0) {
			if (temp % 1000 == 666) {
				count++;
				break;
			}
			temp /= 10;
		}
	}
	cout << end;
}