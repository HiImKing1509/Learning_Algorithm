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
#define MAX 1000000007
#define MIN -1
#define db double
#define ld long double
#define ll long long
#define i64 __int64 // == ll
#define ull unsigned long long
#define ui64 unsigned __int64 // == unsigned ll
#define pq priority_queue
#define sort(v) sort(v.begin(), v.end())
#define _sort(v) sort(v.rbegin(), v.rend())
#define pll pair<ll, ll>

void SolveProblem()
{
	ll n, m, smin, smax, d, res1, res2, sl1, sl2;
	cin >> n >> m;
	d = n - (n / m) * m;
	res1 = n / m;
	sl1 = m - d;
	res2 = res1 + 1;
	sl2 = d;
	smin = res1 * (res1 - 1) / 2 * sl1 + res2 * (res2 - 1) / 2 * sl2;
	smax = (n - m + 1) * (n - m) / 2;
	cout << smin << " " << smax;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//_TestCases_
		SolveProblem();
	return 0;
}
