#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>

using namespace std;

int main() {

	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;

		bool flag = false;

		if (n <= k) {
			cout << 1 << "\n";
			flag = true;
		}
		
		if (!flag && n % 2 == 0 && n / 2 <= k) {
			cout << 2 << "\n";
			flag = true;
		}


		int m = n / 2;
		

		while (!flag && m > 0) {
			if (n % m == 0 && n / m <= k) {
				cout << n / m << "\n";
				flag = true;
				break;
			}
			m -= 2;
		}

		if (!flag)
			cout << n << "\n";

	}
	return 0;
}