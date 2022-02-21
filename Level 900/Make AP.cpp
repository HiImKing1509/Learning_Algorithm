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

void SolveProblem()
{
	vector<ll>vec(3);
	for (auto& i : vec) cin >> i;
	ll max_num = max(vec[0], max(vec[1], vec[2]));
	ll min_num = min(vec[0], min(vec[1], vec[2]));

	bool flag = false;
	
	if (vec[1] == max_num)
	{
		if (((2 * vec[1] - vec[0]) % vec[2] == 0) or ((2 * vec[1] - vec[2]) % vec[0] == 0))
			flag = true;
	}
	else
	{
		if (vec[1] == min_num)
		{
			if (abs(vec[2] - vec[0]) % 2 == 0 and (max_num - (abs(vec[2] - vec[0]) / 2)) % vec[1] == 0)
				flag = true;
		}
		else
		{
			ll a = 2 * vec[1] - max_num;
			if (a > 0 and a % min_num == 0) flag = true;
			else
			{
				ll t = max_num - min_num;
				if ((t % 2 == 0) and (max_num - (t / 2)) % vec[1] == 0) flag = true;
			}
		}
	}

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
