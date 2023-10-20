#include <iostream>
using namespace std;

int main() {
	int n, pos[100000][2], x_min = 10000, y_min = 10000, x_max = -10000, y_max = -10000;

	cin >> n;

	for (int i = 0; i < n; i++) cin >> pos[i][0] >> pos[i][1];

	for (int i = 0; i < n; i++) {
		x_min = x_min >= pos[i][0] ? pos[i][0] : x_min;
		y_min = y_min >= pos[i][1] ? pos[i][1] : y_min;
		x_max = x_max <= pos[i][0] ? pos[i][0] : x_max;
		y_max = y_max <= pos[i][1] ? pos[i][1] : y_max;
	}

	cout << (x_max - x_min) * (y_max - y_min);
}