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

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	ll th;
	cin >> th;
	while (th--)
	{
		ll m;
		cin >> m;
		vector<ll>a(m);
		vector<ll>b(m);
		vector<ll>res;

		ll sumt = 0;
		ll sumd = 0;
		for (ll i = 0; i < m; i++)
		{
			cin >> a[i];
			if (i != 0)
				sumt += a[i];
		}
		for (ll i = 0; i < m; i++)
			cin >> b[i];
		res.push_back(max(sumt, sumd));
		for (ll i = 1; i < m; i++)
		{
			sumt -= a[i];
			sumd += b[i - 1];
			res.push_back(max(sumt, sumd));
		}
		sort(res.begin(), res.end());
		cout << res[0];
		cout << "\n";
	}
	return 0;
}
