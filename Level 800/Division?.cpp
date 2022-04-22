#include <iostream>
#include <vector>
#include <iomanip>

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

void SolveProblem()
{
	ll n; cin >> n;
	if (n >= 1900) cout << "Division 1";
	else if (1600 <= n && n <= 1899) cout << "Division 2";
	else if (1400 <= n && n <= 1599) cout << "Division 3";
	else cout << "Division 4";
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

// Shortcut key for comment in Visual Studio 2019: Ctrl + K + C
// Shortcut key for uncomment in Visual Studio 2019: Ctrl + K + U
