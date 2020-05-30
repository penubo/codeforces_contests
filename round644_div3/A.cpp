#include <iostream>

using namespace std;

int main() {

	int t;
	cin >> t;
	while (t--) {
		int a, b;

		cin >> a >> b;

		int x, y;

		x = 2 * a > b ? 2 * a : b;
		y = 2 * b > a ? 2 * b : a;

		if (x < y)
			cout << x * x << "\n";
		else
			cout << y * y << "\n";

	}
	return 0;
}