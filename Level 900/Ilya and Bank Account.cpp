#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <string>
using namespace std;

typedef long long ll;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	ll n;
	ll dem = 0;
	cin >> n;
	ll t = abs(n);
	ll tcpy = t;
	while (tcpy != 0)
	{
		tcpy = tcpy / 10;
		dem++;
	}
	if (n >= 10)
	{
		cout << n;
		return 0;
	}
	else
	{
		if (dem > 2)
		{
			ll cuoi = t / 10;
			int dv = t % 10;
			ll kecuoi = t / 100;
			kecuoi *= 10;
			kecuoi = kecuoi + dv;
			if (cuoi > kecuoi)
				cout << -kecuoi;
			else
				cout << -cuoi;
		}
		else
		{
			ll cuoi = t % 10;
			ll kecuoi = t / 10;
			if (cuoi > kecuoi)
				cout << -kecuoi;
			else
				cout << -cuoi;
		}
	}
	return 0;
}
