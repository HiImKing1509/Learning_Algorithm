/*------------------------------------------------------------------------*
|    User: Huynh Viet Tuan Kiet                                           |
|    Degree: Student - Formal University                                  |
|    Study Computer Science at the University of Information Technology   |
|    Country: Viet Nam                                                    |
|    City: Ho Chi Minh                                                    |
|    Organization: VNUHCM - UIT - University of Information Technology    |
*-------------------------------------------------------------------------*/

#include <bits/stdc++.h>

using namespace std;

#define _TestCases_ ll tcs; cin >> tcs; while (tcs--)
#define db double
#define ld long double
#define ll long long
#define i64 __int64 // == ll
#define ull unsigned long long
#define ui64 unsigned __int64 // == unsigned ll
#define pq priority_queue
#define sortU(v) sort(v.begin(), v.end())
#define sortD(v) sort(v.rbegin(), v.rend())
#define pcl pair<char, ll>

ll GCD(ll a, ll b) {
	while (b) { a = a % b; swap(a, b); }
	return a;
} // Find GCD of 2 numbers
ll LCM(ll a, ll b) {
	return (a * b) / GCD(a, b);
} // Find LCM of 2 numbers 
ll findGCD(vector<ll>& arr) {
	ll n = arr.size(); ll result = arr[0];
	for (ll i = 1; i < n; i++) { result = GCD(arr[i], result); if (result == 1) return 1; }
	return result;
} // Find GCD of n numbers (n > 2) --- O(n)

void SolveProblem()
{
	ll x, y; cin >> x >> y;
	string s; cin >> s;

	vector<ll>a(4, 0);
	for (ll i = 0; i < s.size(); i++)
	{
		if (s[i] == 'U') a[0]++;
		if (s[i] == 'D') a[1]++;
		if (s[i] == 'R') a[2]++;
		if (s[i] == 'L') a[3]++;
	}
	bool flag = true;
	if (x < 0 && a[3] < abs(x) || x > 0 && a[2] < x) flag = false;
	if (y < 0 && a[1] < abs(y) || y > 0 && a[0] < y) flag = false;
	if (flag) cout << "YES\n";
	else cout << "NO\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	_TestCases_
		SolveProblem();
	return 0;
}
