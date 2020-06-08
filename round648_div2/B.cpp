#include <bits/stdc++.h>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--)
	{
		int n;
		cin >> n;
		vector<int> a(n, 0);
		vector<int> b(n, 0);
		for (int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		bool ot = false, om = false;
		for (int i = 0; i < n; i++)
		{
			cin >> b[i];
			if (b[i])
				ot = true;
			else
				om = true;
		}

		if (ot && om)
			cout << "Yes\n";
		else
		{
			int aa = 0, bb = 0;
			bool flag = true;

			for (int i = 0; i < n; i++)
			{
				if (b[i])
				{
					if (aa > a[i])
					{
						flag = false;
						break;
					}
					aa = a[i];
				}
				else
				{
					if (bb > a[i])
					{
						flag = false;
						break;
					}
					bb = a[i];
				}
			}
			if (flag)
			{
				cout << "Yes\n";
			}
			else
			{
				cout << "No\n";
			}
		}
	}
}