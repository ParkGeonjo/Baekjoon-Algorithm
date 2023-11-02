#include <iostream>
using namespace std;

int main() {
	int a[5], ave = 0, temp, min;

	for (int i = 0; i < 5; i++) cin >> a[i];

	for (int i = 0; i < 5; i++) ave += a[i];
	cout << ave / 5 << endl;

	for (int i = 0; i < 5; i++) {
		min = i;
		for (int j = i + 1; j < 5; j++) {
			if (a[j] < a[min]) {
				min = j;
			}
		}

		if (min != i) {
			temp = a[i];
			a[i] = a[min];
			a[min] = temp;
		}
	}
	cout << a[2];
}