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
	ll n; cin >> n;
	pair<ll, ll>D1(-1, -1);
	pair<ll, ll>D2(-1, -1);
	vector<vector<char>>a(n, vector<char>(n));
	for (ll i = 0; i < n; i++)
	{
		for (ll j = 0; j < n; j++)
		{
			cin >> a[i][j];
			if (a[i][j] == '*')
			{
				if (D1.first == -1)
				{
					D1.first = i;
					D1.second = j;
				}
				else
				{
					D2.first = i;
					D2.second = j;
				}
			}
		}
	}
	if (D1.first == D2.first)
	{
		if (D1.first == 0)
		{
			a[D1.first + 1][D1.second] = '*';
			a[D2.first + 1][D2.second] = '*';
		}
		else
		{
			a[0][D1.second] = '*';
			a[0][D2.second] = '*';
		}
	}
	else if (D1.second == D2.second)
	{
		if (D1.second == 0)
		{
			a[D1.first][D1.second + 1] = '*';
			a[D2.first][D2.second + 1] = '*';
		}
		else
		{
			a[D1.first][0] = '*';
			a[D2.first][0] = '*';
		}
	}
	else
	{
		a[D1.first][D2.second] = '*';
		a[D2.first][D1.second] = '*';
	}
	for (ll i = 0; i < n; i++)
	{
		for (ll j = 0; j < n; j++)
		{
			cout << a[i][j];
		}
		cout << "\n";
	}
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	_TestCases_
		SolveProblem();
	return 0;
}
