#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>

using namespace std;

int main() {

	int t;
	cin >> t;
	while (t--) {
		int n;
		char c;

		cin >> n;

		int arr[n+1][n+1];
		memset(arr, 0, sizeof(int) * (n+1) * (n+1));
		for (int i = 0; i < n; i++) {
			int j = 0;
			while (j < n) {
				cin.get(c);
				if (c == '\n') 
					continue;
				arr[i][j] = c - '0';
				j++;
			}
		}

		
		for (int i = 0; i <= n; i++) {
			arr[n][i] = 1;
			arr[i][n] = 1;
		}


		bool flag = true;
		for (int i = 0; flag && i < n; i++) {
			for (int j = 0; flag && j < n; j++) {
				if (arr[i][j] == 1) {
					if (arr[i+1][j] != 1 && arr[i][j+1] != 1) 
						flag = false;
				}
			}
		}

		if (flag)
			cout << "YES\n";
		else
			cout << "NO\n";

	}
	return 0;
}