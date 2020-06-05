// https://codeforces.com/problemset/problem/1362/B

#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;

	while (t--) {
		int n, maxn = 0;
		cin >> n;
		vector<int> a(n);
		vector<int> b;

		for (int i = 0; i < n; i++) {
			cin >> a[i];
			maxn = max(maxn, a[i]);
		}
		sort(a.begin(), a.end());

		bool flag;
		for (int i = 1; i <= maxn; i++) {
			b.clear();
			flag = true;
			for (int j = 0; j < n; j++) {
				b.push_back(a[j] ^ i);
			}
			if (b.size() == n) {
				sort(b.begin(), b.end());
				for (int i = 0; i < n; i++) {
					if (b[i] != a[i])
						flag = false;
				}
			} else {
				flag = false;
			}
			if (flag) {
				cout << i << "\n";
				break;
			}
		}
		if (!flag) {
			cout << -1 << "\n";
		}
			
	}

}