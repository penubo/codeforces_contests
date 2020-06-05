// https://codeforces.com/problemset/problem/1362/B

#include <bits/stdc++.h>

using namespace std;

int visited[1024];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;

	while (t--) {
		int n, maxn = 0;
		cin >> n;
		vector<int> a(n);
		memset(visited, 0, sizeof(int) * 1024);

		for (int i = 0; i < n; i++) {
			cin >> a[i];
			visited[a[i]] = 1;
			maxn = max(maxn, a[i]);
		}
		bool flag;
		for (int i = 1; i <= maxn; i++) {
			flag = true;
			for (int j = 0; j < n; j++) {
				if (visited[a[j] ^ i] > 1 || visited[a[j] ^ i] == 0)
					flag = false;
				visited[a[j] ^ i] += 1;
			}
			if (flag) {
				cout << i << "\n";
				break;
			} else {
				memset(visited, 0, sizeof(int) * 1024);
				for (int j = 0; j < n; j++)
					visited[a[j]] = 1;
			}
		}
		if (!flag)
			cout << -1 << "\n";
	}

}