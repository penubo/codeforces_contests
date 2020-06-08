#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;
	vector<int> a(n+1, 0);
	vector<int> b(n+1, 0);
	vector<int> p(n+1, 0);
	vector<int> offset(n+1, 0);
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		p[a[i]] = i;
	}
	for (int i = 1; i <= n; i++) {
		cin >> b[i];
	}

	for (int i = 1; i <= n; i++) {
		int cur = p[b[i]] - i;
		if (cur < 0) cur += n;
		offset[cur]++;
	}

	cout << *max_element(offset.begin(), offset.end()) << "\n";
	

}
