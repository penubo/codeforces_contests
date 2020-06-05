// https://codeforces.com/problemset/problem/1363/A

#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;

	while (t--) {
		int n, x;
		int evenc = 0, oddc = 0;
		cin >> n >> x;
		for (int i = 0; i < n; i++) {
			int j;
			cin >> j;
			if (j % 2) oddc++;
			else evenc++;
		}
		if (oddc == 0)
			cout << "No\n";
		else {
			if (oddc % 2 == 0)
				oddc--;
			while (oddc > x)
				oddc -= 2;
			x -= oddc;
			if (x > evenc)
				cout << "No\n";
			else
				cout << "Yes\n";
		}
	}

}
