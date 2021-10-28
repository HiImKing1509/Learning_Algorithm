#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;

typedef long long ll;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	ll th;
	cin >> th;
	while (th--)
	{
		ll n;
		cin >> n;
		vector<ll>a(n);
		for (ll i = 0; i < n; i++)
			cin >> a[i];
		ll sum = 0;
		ll t = 0;
		bool flag = false;
		for (ll i = 0; i < n; i++)
		{
			t += i;
			sum += a[i];
			if (sum < t)
			{
				flag = true;
				cout << "NO\n";
				i = n;
			}
		}
		if (flag == false)
			cout << "YES\n";
	}
	return 0;
}
