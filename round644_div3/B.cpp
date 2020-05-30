#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

	int t;
	cin >> t;
	while (t--) {
		int n, x;
		cin >> n;
		vector<int> arr(n);
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			arr.push_back(x);
		}

		sort(arr.begin(), arr.end(), greater<int>());

		int ans = INT32_MAX;
		for (int i = 0; i < n - 1; i++) {
			if (ans > arr[i] - arr[i+1])
				ans = arr[i] - arr[i+1];
		}

		cout << ans << "\n";		
		
	}
	return 0;
}