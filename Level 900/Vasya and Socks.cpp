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
#define MIN -4294967295
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int n, m;
	cin >> n >> m;
	int ans = n;
	if (n < m)
		cout << ans;
	else if (n == m)
		cout << ans + 1;
	else
	{
		int k = n / m;
		ans += k;
		int tt = n - k * m + k;
		if (tt >= m)
		{
			int ttt = tt;
			while (ttt >= m)
			{
				ans += ttt / m;
				ttt = ttt - m * (ttt / m) + ttt / m;
			}
		}
		cout << ans;
	}
	return 0;
}
