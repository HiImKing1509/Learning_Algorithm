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
	vector<ll>a(n);
	vector<ll>b(n);
	set<ll>SET;
	for (ll i = 0; i < n; i++)
	{
		cin >> a[i];
		SET.insert(a[i]);
		b[a[i] - 1]++;
	}
	sort(b.rbegin(), b.rend());
	if (b[0] == SET.size())
		cout << SET.size() - 1;
	else if (b[0] < SET.size())
		cout << b[0];
	else
		cout << SET.size();
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
