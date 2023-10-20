#include <iostream>
using namespace std;

int main() {
	int a, b, c;

	while (true) {
		cin >> a >> b >> c;

		if (a == 0 && b == 0 && c == 0) break;
		else if (a == b && b == c && a == c) cout << "Equilateral" << endl;
		else {
			if ((a >= b && a >= c && a >= b + c) || (b >= a && b >= c && b >= a + c) || (c >= a && c >= b) && c >= a + b)
				cout << "Invalid" << endl;
			else {
				if (a == b || b == c || a == c) cout << "Isosceles" << endl;
				else cout << "Scalene" << endl;
			}
		}
	}
}