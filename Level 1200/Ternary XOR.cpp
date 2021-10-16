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

ll GCD(ll a, ll b) {
	while (b) { a = a % b; swap(a, b); }
	return a;
} // Find GCD of 2 numbers
ll findGCD(vector<ll>& arr) {
	ll n = arr.size(); ll result = arr[0];
	for (ll i = 1; i < n; i++) { result = GCD(arr[i], result); if (result == 1) return 1; }
	return result;
} // Find GCD of n numbers (n > 2) --- O(n)

void SolveProblem()
{
	ll n;
	string s;
	cin >> n >> s;
	vector<char>a(n, '0');
	vector<char>b(n, '0');
	a[0] = '1'; b[0] = '1';

	bool flag1 = false, flag2 = false;
	for (ll i = 1; i < n; i++)
	{
		if (s[i] == '0') {}
		else if (s[i] == '2')
		{
			if (!flag1 && !flag2)
			{
				a[i] = '1';
				b[i] = '1';
			}
			else b[i] = '2';
		}
		else
		{
			if (!flag1 && !flag2)
			{
				flag1 = true;
				a[i] = '1';
			}
			else b[i] = '1';
		}
	}
	for (auto& i : a) cout << i; cout << "\n";
	for (auto& i : b) cout << i; cout << "\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	_TestCases_
		SolveProblem();
	return 0;
}
