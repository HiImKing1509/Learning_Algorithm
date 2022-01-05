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

ll FirstGreaterElement(vector<ll>& arr, ll xx)
{
	ll len = arr.size() - 1;
	ll st = 0;
	ll ans = -1;
	while (st <= len)
	{
		ll mid = (st + len) / 2;
		if (arr[mid] < xx) st = mid + 1;
		else
		{
			ans = mid;
			len = mid - 1;
		}
	}
	return ans;
}
void SolveProblem()
{
	vector<ll>Square;
	for (ll i = 1; i <= 31623; i++) Square.push_back(i * i);
	ll n; cin >> n;
	ll pos = FirstGreaterElement(Square, n);
	ll mid = Square[pos] - pos;
	ll r = pos, c = pos;
	if (n < mid) r = pos - mid + n;
	else c = pos - n + mid;
	cout << ++r << " " << ++c << "\n";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	_TestCases_
		SolveProblem();
	return 0;
}
