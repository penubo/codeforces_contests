#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	int osum = 0;
	int m = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		m = max(m, x);
		osum |= x;
	}

	int a = max(m-2, 1);
	int pmax = pow(2, a+1) - 1;

	cout << min(pmax, osum) << "\n";


	
}