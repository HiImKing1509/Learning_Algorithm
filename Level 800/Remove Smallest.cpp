#include <iostream>
#include <vector>
#include <queue>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	queue<string>str;
	string gg;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int k;
		cin >> k;
		vector<int>a(k);
		for (int j = 0; j < k; j++)
		{
			cin >> a[j];
		}
		if (k == 1)
		{
			gg = "YES";
			str.push(gg);
		}
		else
		{
			sort(a.begin(), a.end());
			int dem = 0;
			for (int l = 0; l < k - 1; l++)
			{
				int dis = a[l + 1] - a[l];
				if (dis >= 2)
				{
					gg = "NO";
					str.push(gg);
					l = k - 1;
				}
				else
				{
					dem++;
				}
			}
			if (dem == k - 1)
			{
				gg = "YES";
				str.push(gg);
			}
		}
	}
	for (int i = 0; i < n; i++)
	{
		cout << str.front() << "\n";
		str.pop();
	}
	return 0;
}
