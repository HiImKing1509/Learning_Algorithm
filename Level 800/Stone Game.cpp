/*------------------------------------------------------------------------*
|    User: Huynh Viet Tuan Kiet                                           |
|    Degree: Student - Formal University                                  |
|    Study Computer Science at the University of Information Technology   |
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
#define MAX 101
#define MIN -1

#define db double
#define ld long double
#define ll long long
#define i64 __int64 // == ll

#define ull unsigned long long
#define ui64 unsigned __int64 // == unsigned ll

#define pq priority_queue

void SolveProblem()
{
	ll n, vtmin = MIN, vtmax = MIN, res;
	cin >> n;
	vector<ll>a(n);
	for (ll i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] == 1)
			vtmin = i;
		if (a[i] == n)
			vtmax = i;
	}
	if (vtmin < vtmax)
		res = min(vtmin + 1, n - vtmax) + min(vtmax - vtmin, max(vtmin + 1, n - vtmax));
	else
		res = min(vtmax + 1, n - vtmin) + min(vtmin - vtmax, max(vtmax + 1, n - vtmin));
	cout << res << "\n";
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	_TestCases_
		SolveProblem();
	return 0;
}
