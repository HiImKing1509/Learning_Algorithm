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

	ll k;
	cin >> k;
	vector<ll>month(12);

	for (ll i = 0; i < 12; i++)
		cin >> month[i];

	sort(month.rbegin(), month.rend());

	if (k == 0)
	{
		cout << 0;
		return 0;
	}
	else
	{
		ll sum = 0;
		ll count = 0;
		for (ll i = 0; i < 12; i++)
		{
			if (sum < k)
			{
				sum += month[i];
				count++;
			}
			else
				i = 12;
		}
		if (sum >= k)
			cout << count;
		else
			cout << -1;
	}
	return 0;
}
