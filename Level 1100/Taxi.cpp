#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>
#include <stack>
#include <cmath>
using namespace std;

typedef long long ll;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	ll n;
	cin >> n;
	vector<int>a(n);
	ll res = 0;
	ll dem1 = 0;
	ll dem2 = 0;
	ll dem3 = 0;

	for (ll i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] == 4)
			res++;
		else if (a[i] == 3)
			dem3++;
		else if (a[i] == 2)
			dem2++;
		else
			dem1++;
	}
	// -------------- 1 vs 3 ------------------
	if (dem1 > dem3)
	{
		res = res + dem3;
		dem1 = dem1 - dem3;
		dem3 = 0;
	}
	else if (dem1 < dem3)
	{
		res = res + dem1;
		dem3 = dem3 - dem1;
		dem1 = 0;
	}
	else
	{
		res = res + dem1;
		dem1 = dem3 = 0;
	}
	// -------------- 2 vs 2 ------------------
	if (dem2 % 2 == 0)
	{
		res = res + dem2 / 2;
		dem2 = 0;
	}
	else
	{
		res = res + dem2 / 2;
		dem2 = 1;
	}
	// -------------- remain ------------------
	if (dem3 != 0)
	{
		res = res + dem3;
		dem3 = 0;
	}
	if (dem2 != 0 && dem1 <= 2)
	{
		res += 1;
		dem2 = dem1 = 0;
	}
	if (dem2 != 0 && dem1 > 2)
	{
		res += 1;
		dem1 -= 2;
		if (dem1 % 4 == 0)
			res = res + dem1 / 4;
		else
			res = res + dem1 / 4 + 1;
		dem1 = dem2 = 0;
	}
	if (dem2 == 0 && dem1 != 0)
	{
		if (dem1 % 4 == 0)
			res = res + dem1 / 4;
		else
			res = res + dem1 / 4 + 1;
		dem1 = 0;
	}
	if (dem1 == 0 && dem2 == 0 && dem3 == 0)
		cout << res;
	return 0;
}
