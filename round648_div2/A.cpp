#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		vector<int> row(n, 0);
		vector<int> col(m, 0);
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				int x;
				cin >> x;
				if (x) {
					row[i] = 1;
					col[j] = 1;
				}
			}
		}

		int cnt = 0;

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (!row[i] && !col[j]) {
					row[i] = col[j] = 1;
					cnt++;
				}
			}
		}

		if (cnt % 2 == 0) {
			cout << "Vivek\n";
		} else {
			cout << "Ashish\n";
		}

	}


}