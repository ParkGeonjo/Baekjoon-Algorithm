#include <iostream>
using namespace std;

int main() {
	int n, bag = 0;

	cin >> n;

	while (n > 0) {
		if (n % 5 == 0) {
			bag += n / 5;
			break;
		}
		n -= 3;
		bag++;
	}
	if (n < 0) cout << -1;
	else cout << bag;
}