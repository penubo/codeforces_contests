#include <bits/stdc++.h>

using namespace std;

#define MAX 1e9

int dfs(long long x, int cnt) {
	if (x == 1) {
		return cnt;
	}

	if (x % 6 != 0 && x * 2 > MAX)
		return -1;

	if (x % 6 == 0) {
		return dfs(x / 6, cnt+1);
	}
	if (x * 2 <= MAX) {
		return dfs(x * 2, cnt+1);
	}
}

int main() {

	int t;
	cin >> t;

	while (t--) {
		long long n;
		cin >> n;

		cout << dfs(n, 0) << "\n";
	}

	return 0;
}