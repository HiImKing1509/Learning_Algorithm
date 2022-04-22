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


void SolveProblem()
{
	ll n; cin >> n;
	vector<ll>a(n);
	bool evenIndexEven = false;
	bool evenIndexOdd = false;
	bool oddIndexEven = false;
	bool oddIndexOdd = false;

	for (ll i = 0; i < n; i++)
	{
		cin >> a[i];
		if (i % 2 == 0)
		{
			if (a[i] % 2 == 0) evenIndexEven = true;
			else evenIndexOdd = true;
		}
		else
		{
			if (a[i] % 2 == 0) oddIndexEven = true;
			else oddIndexOdd = true;
		}
	}
	if (evenIndexEven == evenIndexOdd || oddIndexEven == oddIndexOdd) cout << "NO\n";
	else cout << "YES\n";
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
