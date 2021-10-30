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
	ll n;
	cin >> n;
	vector<ll>a(500000, 0);
	a[0] = -1;
	a[1] = 0;
	if (n == 1)
		cout << a[1];
	else
	{
		ll bao = 0, k = 1;
		for (ll i = 3; i < 500000; i += 2, k++)
		{
			bao += 8;
			a[i] = a[i - 2] + bao * k;
			if (i == n)
			{
				cout << a[i];
				break;
			}
		}
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
