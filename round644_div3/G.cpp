#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>

using namespace std;

int main() {

	int t;
	cin >> t;
	while (t--) {
		int n, m, a, b;
		cin >> n >> m >> a >> b;
		
		if (n * a != m * b){
			cout << "NO\n";
		} else {
			cout << "YES\n";
			vector<bool> arr;
			for (int i = 0; i < m; i++) {
				if (i < a)
					arr.push_back(1);
				else
					arr.push_back(0);
			}

			int k = 0;
			for (int i = 0; i < n; i++) {
				for (int j = 0, l = k; j < m; j++, l++) {
					cout << arr[l%m];
				}
				cout << "\n";
				k = (k + a)%m;
			}
		}
		
	}
	return 0;
}