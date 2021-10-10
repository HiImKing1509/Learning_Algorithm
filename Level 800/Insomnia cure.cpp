/*------------------------------------------------------------------------*
|    User: Huynh Viet Tuan Kiet                                           |
|    Degree: Student - Formal University                                  |
|    Study Computer Science at the University of Information Technology   |
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

typedef long long ll;
ll GCD(ll a, ll b)
{
	while (b)
	{
		a = a % b;
		swap(a, b);
	}
	return a;
}
ll LCM2(ll a, ll b)
{
	return (a * b) / GCD(a, b);
}
ll LCM3(ll a, ll b, ll c)
{
	return LCM2(a, LCM2(b, c));
}
ll LCM4(ll a, ll b, ll c, ll d)
{
	return LCM2(LCM2(a, b), LCM2(c, d)); 
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	ll k, l, m, n, d, ans = 0, n1, n2, n3, n4;
	cin >> k >> l >> m >> n >> d;
	n1 = d / k + d / l + d / m + d / n;
	n2 = d / LCM2(k, l) + d / LCM2(k, m) + d / LCM2(k, n) + d / LCM2(l, m) + d / LCM2(l, n) + d / LCM2(m, n);
	n3 = d / LCM3(k, l, m) + d / LCM3(k, l, n) + d / LCM3(k, m, n) + d / LCM3(l, m, n);
	n4 = d / LCM4(k, l, m, n);
	ans = n1 - n2 + n3 - n4;
	cout << ans;
	return 0;
}
