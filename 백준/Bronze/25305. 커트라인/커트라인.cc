#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int n, k, a[1000], key, j;

	cin >> n >> k;

	for (int i = 0; i < n; i++) cin >> a[i];

	for (int i = 1; i < n; i++) {
		key = a[i];
		for (j = i - 1; j >= 0 && a[j] > key; j--) {
			a[j + 1] = a[j];
		}
		a[j + 1] = key;
	}

	reverse(a, a + n);

	cout << a[k - 1];
}