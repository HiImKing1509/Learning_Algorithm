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
#define pll pair<ll, ll>

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
float sqrtFunc(float x) {
	float res = 0;
	for (float l = 0, r = (float)100, i = 0; i <= 100; i++)
	{
		float m = (float)(l + r) / 2;
		if (m * m <= x)	l = m, res = m;
		else r = m;
	}
	return res;
} // Find sqrt of float n

void SolveProblem()
{
	string s; cin >> s;
	ll st = -1, e = -1, res = 0;
	bool first_one = false;
	for (ll i = 0; i < s.length(); i++)							{
		if (s[i] == '1')								{
			if (!first_one)								{
				st = i;
				first_one = true;						} 
			e = i;									}
												}
	for (ll i = st; i < e; i++)
		if (s[i] == '0') res++;
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
