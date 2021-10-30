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
	ll n, m;
	cin >> n >> m;
	vector<ll>a(m);
	for (ll i = 0; i < m; i++)
		cin >> a[i];

	ll ans = 0;
	ll k = 1;
	for (ll i = 0; i < m; i++)
	{
		if (a[i] == k)
			continue;
		if (a[i] > k)
			ans += a[i] - k;
		if (a[i] < k)
			ans += a[i] + (n - k);
		k = a[i];
	}
	cout << ans;
	return 0;
}
