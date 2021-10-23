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

	ll th;
	cin >> th;

	queue<string>kq;
	for (ll k = 0; k < th; k++)
	{
		ll n;
		cin >> n;
		if (n <= 2019)
			kq.push("NO");
		else
		{
			if (n % 2020 == 0 || n % 2021 == 0)
				kq.push("YES");
			else
			{
				ll mod = n / 2020;
				ll t = n - 2020 * mod;
				if (t <= mod || t == 2021)
					kq.push("YES");
				else
					kq.push("NO");
			}
		}
	}
	for (ll i = kq.size(); i > 0; i--)
	{
		cout << kq.front() << "\n";
		kq.pop();
	}
	return 0;
}
