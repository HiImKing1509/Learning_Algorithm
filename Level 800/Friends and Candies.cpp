#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	queue<int>b;
	for (int k = 0; k < n; k++)
	{
		int t;
		int sum = 0;
		cin >> t;
		vector<int>a(t);
		for (int i = 0; i < t; i++)
		{
			cin >> a[i];
			sum = sum + a[i];
		}
		if (t == 1)
			b.push(0);
		else if (t == 2)
		{
			if (a[0] == a[1])
				b.push(0);
			else if (a[0] != a[1] && sum % t == 0)
				b.push(1);
			else if (a[0] != a[1] && sum % t != 0)
				b.push(-1);
		}
		else
		{
			if (sum % t != 0)
				b.push(-1);
			else
			{
				sort(a.rbegin(), a.rend());
				if (a[0] == a[t - 1])
					b.push(0);
				else
				{
					int dem = 0;
					int tb = sum / t;
					for (int c = 0; c < a.size(); c++)
					{
						if (a[c] > tb)
							dem++;
						else
						{ }
					}
					b.push(dem);
				}
			}
		}
	}
	for (int d = b.size(); d > 0; d--)
	{
		cout << b.front() << "\n";
		b.pop();
	}
	return 0;
}
