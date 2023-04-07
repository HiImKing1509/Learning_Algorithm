/*------------------------------------------------------------------------*
|    User: Huynh Viet Tuan Kiet                                           |
|    Degree: Student - Formal University                                  |
|    Study Computer Science at the University of Information Technology   |
|    Country: Viet Nam                                                    |
|    City: Ho Chi Minh                                                    |
|    Organization: VNUHCM - UIT - University of Information Technology    |
*-------------------------------------------------------------------------*/

#include <bits/stdc++.h>
//#include <vector>
//#include <iostream>

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
#define psl pair<string, ll>
#define MOD 1e9 + 7


void solve()
{
    ll n, x1, y1, x2, y2;
    cin >> n >> x1 >> y1 >> x2 >> y2;
    if (n == 2)
        cout << 0 << "\n";
    else
    {
        ll pos1 = min(min(n - x1, n - y1), min(x1 - 1, y1 - 1));
        ll pos2 = min(min(n - x2, n - y2), min(x2 - 1, y2 - 1));

        cout << abs(pos1 - pos2) << "\n";
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    _TestCases_
        solve();

    return 0;
}
