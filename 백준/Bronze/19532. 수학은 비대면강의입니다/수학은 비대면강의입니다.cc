#include <iostream>
using namespace std;

int main() {
	int a, b, c, d, e, f, out = 0;

	cin >> a >> b >> c >> d >> e >> f;

	for (int i = -999; i <= 999; i++) {
		for (int j = -999; j <= 999; j++) {
			if ((a * i) + (b * j) == c && (d * i) + (e * j) == f) {
				cout << i << " " << j;
				out = 1;
				break;
			}
		}
		if (out) break;
	}
}