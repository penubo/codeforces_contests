#include <bits/stdc++.h>

using namespace std;

int main() {

	int n, k;
	cin >> n >> k;
	deque<int> uu, aa, bb;
	for (int i = 0; i < n; i++) {
		int t, a, b;
		cin >> t >> a >> b;
		if (a && b)
			uu.push_back(t);
		else if (a)
			aa.push_back(t);
		else if (b)
			bb.push_back(t);
	}

	if (aa.size() + uu.size() < k || bb.size() + uu.size() < k)
		cout << "-1\n";
	else {
		sort(aa.begin(), aa.end());
		sort(bb.begin(), bb.end());
		sort(uu.begin(), uu.end());

		long long ans = 0;
		k *= 2;
		
		while (k > 0) {
			if (aa.size() == 0 || bb.size() == 0) {
					ans += uu.front();
					uu.pop_front();
					k--;
			} else if (uu.size() == 0) {
				ans += aa.front() + bb.front();
				aa.pop_front(); bb.pop_front();
			} else {
				if (aa.front() + bb.front() < uu.front()) {
					ans += aa.front() + bb.front();
					aa.pop_front(); bb.pop_front();
				} else {
					ans += uu.front();
					uu.pop_front();
					k--;
				}
			}
			k--;
		}
		cout << ans << "\n";
	}

	return 0;
}