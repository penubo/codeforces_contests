#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>

using namespace std;

int main() {

	int t;
	cin >> t;
	while (t--) {
		int n, m;
		cin >> n >> m;
		string x;
		vector<string> arr;
		for (int i = 0; i < n; i++) {
			cin >> x;
			arr.push_back(x);
		}

		string sol;
		bool found = true;
		int d;

		for (int i = 0; i < m; i++) {
			sol = arr[0];
			for (int j = 0; j < 26; j++) {
				sol[i] = 'a' + j;
				found = true;
				for (int k = 0; k < n; k++) {
					d = 0;
					for (int l = 0; l < m; l++) {
						if (sol[l] != arr[k][l])
							d++;
						if (d > 1) {
							found = false;
							break;
						}
					}
				}
				if (found)
					break;
			}
			if (found)
				break;
		}

		if (found) {
			cout << sol << "\n";
		} else {
			cout << -1 << "\n";
		}

		
	}
	return 0;
}