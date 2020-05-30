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
		long long ans = n;
		int i = 1;
		while (i*i <= n && i <= k) {
			if (n % i == 0) {
				if (n / i <= k) {
					ans = i;
					break;
				}
				if (ans > n / i)
					ans = n / i;
			}
			i += 1;
		}
		cout << ans << "\n";
	}
	return 0;
}