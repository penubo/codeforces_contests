#include <bits/stdc++.h>

using namespace std;

int main() {

	long long t;
	cin >> t;

	while (t--) {
		long long x, y, n;
		cin >> x >> y >> n;
		
		long long q = (n - y) / x;
		cout << q * x + y << "\n";
		
	}

	return 0;
}