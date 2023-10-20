#include <iostream>
using namespace std;

int main() {
	int a, b, c;

	cin >> a >> b >> c;

	if (a == b && b == c && a == c) cout << "Equilateral";
	else if (a + b + c == 180 && (a == b || b == c || a == c)) cout << "Isosceles";
	else if (a + b + c == 180) cout << "Scalene";
	else cout << "Error";
}