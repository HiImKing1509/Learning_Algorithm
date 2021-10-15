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
#define MAX 1000000000
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
	string s;
	cin >> s;
	ll n = s.size();
	if (s[n - 2] == '0' && s[n - 1] == '0'
		|| s[n - 2] == '5' && s[n - 1] == '0'
		|| s[n - 2] == '2' && s[n - 1] == '5'
		|| s[n - 2] == '7' && s[n - 1] == '5')
		cout << 0;
	else
	{
		bool cs1 = false, cs2 = false;

		ll vt0 = -1;
		ll res1 = 0;
		bool flag0 = false;
		for (ll i = n - 1; i >= 0; i--)
		{
			if (s[i] == '0' && !flag0)
			{
				flag0 = true;
				vt0 = i;
				res1 = res1 + (n - 1 - vt0);
			}
			else if ((s[i] == '0' || s[i] == '5') && flag0)
			{
				res1 = res1 + (vt0 - 1 - i);
				cs1 = true;
				i = -1;
			}
		}
		ll vt5 = -1;
		ll res2 = 0;
		bool flag5 = false;
		for (ll i = n - 1; i >= 0; i--)
		{
			if (s[i] == '5' && !flag5)
			{
				flag5 = true;
				vt5 = i;
				res2 = res2 + (n - 1 - vt5);
			}
			else if ((s[i] == '2' || s[i] == '7') && flag5)
			{
				res2 = res2 + (vt5 - 1 - i);
				cs2 = true;
				i = -1;
			}
		}
		if (cs1 == false) cout << res2;
		else if (cs2 == false) cout << res1;
		else cout << min(res1, res2);
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
