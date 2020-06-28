#include <bits/stdc++.h>

using namespace std;

int main() {

	int t;
	cin >> t;
	while (t--) {
		int n, cnt = 0;
		cin >> n;
		string s;
		cin >> s;

		vector<char> stack;
		for (int i = 0; i < n; i++) {
			if (s[i] == '(')
				stack.push_back(s[i]);
			else if (stack.size() == 0) {
				cnt++;
			} else {
				stack.pop_back();
			}
		}

		cout << cnt << "\n";
		
	}

	return 0;
}