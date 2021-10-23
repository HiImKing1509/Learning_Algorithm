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

	ll n;
	cin >> n;
	for (ll i = 0; i < n; i++)
	{
		ll g, a, b, c, d;
		cin >> g >> a >> b >> c >> d;
		ll sub_ab = a - b;
		ll sum_ab = a + b;
		ll sub_cd = c - d;
		ll sum_cd = c + d;

		if ((sum_ab * g < sub_cd) || (sub_ab * g > sum_cd))
			cout << "No";
		else
			cout << "Yes";
		cout << "\n";
	}
	return 0;
}
