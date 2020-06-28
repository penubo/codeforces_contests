#include <bits/stdc++.h>

using namespace std;


int arr[200001];

int main() {

	int t;
	cin >> t;
	while (t--) {
		int n;
		long long k;
		cin >> n >> k;
		memset(arr, 0, sizeof(arr));
		for (int i = 0; i < n; i++) {
			long long x;
			cin >> x;
			arr[i] = x % k != 0 ? k - (x % k) : 0;
		}
		sort(arr, arr+n);

		int prev = arr[0];
		int curr = arr[0];
		int ans = -1;
		int temp = arr[0];

		for (int i = 1; i < n; i++) {
			if (arr[i] == 0) continue;
			curr = arr[i];
			ans = max(ans, curr);
			if (curr != prev) {
				prev = curr;
				temp = curr;
			} else {
				temp += k;
			}
		
			ans = max(ans, temp);
		}

		cout << ans + 1 << "\n";
	}


	return 0;
}