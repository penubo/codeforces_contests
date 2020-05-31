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
		
		bool matrix[n][m];
		int row[n];
		int col[m];
		memset(matrix, 0, n*m);
		memset(row, 0, sizeof(int) * n);
		memset(col, 0, sizeof(int) * m);

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < m; j++) {
				if (!matrix[i][j] && row[i] < a && col[j] < b) {
					matrix[i][j] = 1;
					row[i]++;
					col[j]++;
				}
			}
		}

		bool flag = true;
		for (int i = 0; flag && i < n; i++) {
			if (row[i] != a)
				flag = false;
		}
		for (int j = 0; flag && j < m; j++) {
			if (col[j] != b)
				flag = false;
		}

		if (flag) {
			cout << "YES\n";
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < m; j++) {
					cout << matrix[i][j];
				}
				cout << "\n";
			}
		}
		else {
			cout << "NO\n";
		}
		
		
	}
	return 0;
}