#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	vector<int> a(2*n);
	vector<int> b(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		a[n+i] = a[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}

	int ans = 0;
	for (int i = 0; i < a.size() - b.size(); i++) {
		int cnt = 0;
		for (int j = 0; j < b.size(); j++) {
			if (a[i+j] == b[j]) {
				cnt++;
			}
		}
		ans = max(ans, cnt);
	}

	cout << ans << "\n";
	

}
