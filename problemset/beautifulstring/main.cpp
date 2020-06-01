#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		string s;
		cin >> s;
		if (s.length() == 1) {
			if (s[0] == '?')
				s[0] = 'a';
			cout << s << "\n";
			continue;
		} else if (s.length() == 2) {
			if (s[0] == '?') {
				s[0] = 'a';
				while (s[0] == s[1])
					s[0]++;
			}
			if (s[1] == '?') {
				s[1] = 'a';
				while (s[0] == s[1])
					s[1]++;
			}
			if (s[0] == s[1]) {
				cout << -1 << "\n";
				continue;
			}
		}
		if (s[0] == '?') {
			s[0] = 'a';
			while (s[0] == s[1])
				s[0]++;
		}
		if (s[s.length()-1] == '?') {
			s[s.length()-1] = 'a';
			while (s[s.length()-1] == s[s.length()-2])
				s[s.length()-1]++;
		}
		bool flag = true;
		for (int i = 1; i < s.length()-1; i++) {
			if (s[i] == '?') {
				s[i] = 'a';
				while (s[i-1] == s[i] || s[i] == s[i+1])
					s[i]++;
			}
			if (s[i-1] == s[i] || s[i] == s[i+1]) {
				flag = false;
			}
		}
		if (flag) {
			cout << s << "\n";
		} else {
			cout << -1 << "\n";
		}
	}
}