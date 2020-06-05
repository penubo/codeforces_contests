// https://codeforces.com/problemset/problem/1362/B

#include <bits/stdc++.h>

using namespace std;

int n;
int arr[1025];
bool visited[1025];

bool check(int k) {
	for (int i = 0; i < n; i++) {
		if (!visited[arr[i] ^ k])
			return false;
	}
	return true;
}

void solve() {

	cin >> n;

	memset(visited, 0, 1025);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		visited[arr[i]] = true;
	}

	for (int k = 1; k < 1024; ++k) {
		if (check(k)) {
			cout << k << "\n";
			return ;
		}
	}
	cout << -1 << "\n";
			
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