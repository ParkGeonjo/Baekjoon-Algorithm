#include <iostream>
using namespace std;

int main() {
	int n, ans = 0;

	cin >> n;

	for (int i = 1; i < n; i++) {
		int sum = 0, a = i;
		while (a != 0) {
			sum += a % 10;
			a /= 10;
		}
		if (sum + i == n) {
			ans = i;
			break;
		}
	}
	cout << ans;
}