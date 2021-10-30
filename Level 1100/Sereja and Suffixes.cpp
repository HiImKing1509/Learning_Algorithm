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
#define ld long double
#define ll long long
#define i64 __int64 // == ll

#define ull unsigned long long
#define ui64 unsigned __int64 // == unsigned ll

#define pq priority_queue

void SolveProblem()
{
	ll n, m;
	cin >> n >> m;
	vector<ll>a(n + 1);
	vector<ll>aa(m + 1);
	vector<ll>b(n + 1);
	queue<ll>res;
	set<ll>ans;
	a[0] = MIN;
	aa[0] = MIN;
	b[0] = MIN;

	for (ll i = 1; i <= n; i++)
		cin >> a[i];
	for (ll i = 1; i <= m; i++)
		cin >> aa[i];
	for (ll i = n; i > 0; i--)
	{
		ans.insert(a[i]);
		b[i] = ans.size();
	}
	for (ll i = 1; i <= m; i++)
		res.push(b[aa[i]]);
	for (ll i = res.size(); i > 0; i--)
	{
		cout << res.front() << "\n";
		res.pop();
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
