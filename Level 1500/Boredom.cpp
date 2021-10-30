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
#define MAX 4001
#define MIN -1

#define db double

#define ll long long
#define i64 __int64 // == long long

#define ull unsigned long long
#define ui64 unsigned __int64 // == unsigned long long


void SolveProblem()
{
	ll n, m = MIN;
	cin >> n;
	vector<ll>a(1000000);
	vector<ll>f(1000000);
	for (ll i = 0; i < n; i++)
	{
		ll t;
		cin >> t;
		a[t]++;
		if (m < t)
			m = t;
	}
	f[0] = 0;
	f[1] = a[1];
	for (ll i = 2; i <= m; i++)
		f[i] = max(f[i - 1], (f[i - 2] + (ll)(i * a[i])));
	cout << f[m];
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//_TestCases_
		SolveProblem();
	return 0;
}
