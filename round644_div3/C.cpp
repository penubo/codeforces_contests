#include <iostream>
#include <algorithm>
#include <cstring>
#include <vector>

using namespace std;

int main() {

	int t;
	cin >> t;
	while (t--) {
		int n, x;
		cin >> n;
		vector<int> odds, evens;

		for (int i = 0; i < n; i++)
		{
			cin >> x;
			if (x % 2)
				odds.push_back(x);
			else
				evens.push_back(x);
		}
		
		if (odds.size() % 2 == 0 && evens.size() % 2 == 0) {
			cout << "YES\n";
		} else {
			bool flag = false;
			for (auto odd : odds)
				for (auto even : evens)
					if (abs(odd - even) == 1) {
						flag = true;
						break;
					}
			if (flag)
				cout << "YES\n";
			else
				cout << "NO\n";
		}
	

	}
	return 0;
}