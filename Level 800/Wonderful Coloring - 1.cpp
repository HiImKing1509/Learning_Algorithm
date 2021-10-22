/*------------------------------------------------------------------------*
|    User: Huynh Viet Tuan Kiet                                           |
|    Degree: Student - Formal University                                  |
|    Study Computer Science at University of Information Technology       |
|    Country: Viet Nam                                                    |
|    City: Ho Chi Minh                                                    |
|    Organization: VNUHCM - UIT - University of Information Technology    |
*-------------------------------------------------------------------------*/
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>
#include <stack>
#include <cmath>
using namespace std;

#define MAX 100000
#define MIN -100000
#define ll long long

int CountNumbers(int k)
{
	int c = 0;
	while (k != 0)
	{
		k /= 10;
		c++;
	}
	return c;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	ll th;
	cin >> th;
	while (th--)
	{
		string s;
		cin >> s;
		int n = s.length();

		if (n == 1)
			cout << 0;
		else
		{
			vector<char>a;
			vector<int>count;
			for (int i = 0; i < n; i++)
				a.push_back(s[i]);
			sort(a.begin(), a.end());
			if (a[0] == a[n - 1])
				cout << 1;
			else
			{
				int j = 0;
				int vt = 0;
				int co = 1;
				while (j < n - 1)
				{
					if (a[j] == a[j + 1])
						co++;
					else
					{
						count.push_back(co);
						vt += co;
						co = 1;
					}
					j++;
				}
				if (a[n - 1] == a[n - 2])
					count.push_back(n - vt);
				else
					count.push_back(1);
				int kk = count.size();

				int c1 = 0, c2 = 0, cn = 0;
				for (int i = 0; i < kk; i++)
				{
					if (count[i] == 1)
						c1++;
					else if (count[i] == 2)
						c2++;
					else
						cn++;
				}
				int res = 0;
				res += c1 / 2;
				res += c2;
				res += cn;
				cout << res;
			}
		}
		cout << "\n";
	}
	return 0;
}
