#include <iostream>
#include <queue>
#include <cmath>
using namespace std;

typedef long long ll;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	queue<string>kq;
	ll sth;
	cin >> sth;

	for (ll i = 0; i < sth; i++)
	{
		ll n;
		cin >> n;

		if (n % 2 != 0)
			kq.push("YES");
		else
		{
			while (n > 1)
			{
				n = n / 2;
				if (n % 2 != 0 && n > 1)
				{
					kq.push("YES");
					n = 0;
				}
			}
			if (n == 1)
				kq.push("NO");
		}
	}
	for (ll i = kq.size(); i > 0; i--)
	{
		cout << kq.front() << "\n";
		kq.pop();
	}
	return 0;
}
