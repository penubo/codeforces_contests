#include <bits/stdc++.h>

using namespace std;

void solve() {

	int n, m;
	cin >> n >> m;

	vector<vector<char>> arr(n, vector<char>(m, 0));
	queue<pair<int, int>> q;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> arr[i][j];
			if (arr[i][j] == '.') {
				q.push({i, j});
			}
		}
	}

	bool flag = false;
	while (1) {
		// check



		if (q.empty())
			break;
		// block

	}

	if (flag) {
		cout << "Yes\n";
	} else {
		cout << "No\n";
	}

}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		solve();
	}

	
}