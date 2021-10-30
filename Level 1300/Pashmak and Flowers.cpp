/*------------------------------------------------------------------------*
|    User: Huynh Viet Tuan Kiet                                           |
|    Degree: Student - Formal University                                  |
|    Study Computer Science at University of Information Technology       |
|    Country: Viet Nam                                                    |
|    City: Ho Chi Minh                                                    |
|    Organization: VNUHCM - UIT - University of Information Technology    |
*-------------------------------------------------------------------------*/
#include <iostream>
#include <climits>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <cmath>
#include <set>
#include <list>
#include <map>

using namespace std;

#define _TestCases_ ll tcs; cin >> tcs; while (tcs--)
#define MAX 1000000000
#define MIN -1

#define db double

#define ll long long
#define i64 __int64 // == long long

#define ull unsigned long long
#define ui64 unsigned __int64 // == unsigned long long
ll GiaiThua(ll k)
{
	if (k == 0)
		return 1;
	return GiaiThua(k - 1) * k;
}
ll C(ll n, ll k)
{
	ll t = 1;
	for (int i = 0; i < k; i++)
	{
		t = t * n;
		n--;
	}
	return t / GiaiThua(k);
}
void SolveProblem()
{
	ll n;
	cin >> n;
	vector<ll>a(n);
	for (ll i = 0; i < n; i++)
		cin >> a[i];
	sort(a.begin(), a.end());
	ll lc1 = a[n - 1];
	ll lc2 = a[0];
	ll c1 = 0, c2 = 0;
	bool flag1 = true, flag2 = true;
	if (a[0] == a[n - 1])
		cout << 0 << " " << C(n, 2) << "\n";
	else
	{
		ll j = 0;
		for (ll i = n - 1; i >= 0; i--, j++)
		{
			if (a[i] == lc1)
				c1++;
			else
				flag1 = false;
			if (a[j] == lc2)
				c2++;
			else
				flag2 = false;
			if (!flag1 && !flag2)
				break;
			
		}
		cout << lc1 - lc2 << " " << c1 * c2 << "\n";
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//_TestCases_
		SolveProblem();
	return 0;
}
