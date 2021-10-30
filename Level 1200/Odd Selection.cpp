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
	ll n, x, o = 0, e = 0, sum = 0;
	cin >> n >> x;
	vector<ll>a(n);
	for (ll i = 0; i < n; i++)
	{
		cin >> a[i];
		if (a[i] % 2 == 0) e++;
		else o++;
		sum += a[i];
	}
	if (x == n)
	{
		if (sum % 2 != 0) cout << "YES";
		else cout << "NO";
	}
	else if (o == n)
	{
		if (x % 2 == 0) cout << "NO";
		else cout << "YES";
	}
	else if (e == n) cout << "NO";
	else
	{
		if (o != 0) cout << "YES";
		else cout << "NO";
	}
	cout << "\n";
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	_TestCases_
		SolveProblem();
	return 0;
}
