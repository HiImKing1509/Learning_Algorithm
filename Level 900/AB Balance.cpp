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
	ll ab = 0, ba = 0;
	string s;
	cin >> s;
	if (s.length() == 1) cout << s;
	else
	{
		for (ll i = 0; i < s.length() - 1; i++)
		{
			if (s[i] == 'a' && s[i + 1] == 'b') ab++;
			if (s[i] == 'b' && s[i + 1] == 'a') ba++;
		}
		if (ab == ba) cout << s;
		else
		{
			if (ab > ba)
			{
				if (s[0] == 'a') s[0] = 'b';
				else s[s.length() - 1] = 'a';
			}
			else
			{
				if (s[0] == 'b') s[0] = 'a';
				else s[s.length() - 1] = 'b';
			}
			cout << s;
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
