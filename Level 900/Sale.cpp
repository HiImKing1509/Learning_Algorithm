#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	ll n, m;
	cin >> n >> m;

	vector<ll>a(n);
	for (ll i = 0; i < n; i++)
		cin >> a[i];

	sort(a.begin(), a.end());
	if (a[0] >= 0)
	{
		cout << 0;
		return 0;
	}
	else
	{
		ll sum = 0;
		for (ll i = 0; i < m; i++)
		{
			if (a[i + 1] >= 0)
			{
				sum += a[i];
				i = m;
			}
			else
				sum += a[i];
		}
		cout << abs(sum);
	}
	return 0;
}
