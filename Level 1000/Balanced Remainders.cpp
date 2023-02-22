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
    ll n; cin >> n;
    ll mean = n / 3;
    vector<ll>a(n);
    vector<ll>counter(3, 0);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        counter[a[i] % 3]++;
    }

    ll res = 0;
    while (counter[0] != mean || counter[1] != mean || counter[2] != mean)
    {
        if (counter[2] > mean)
        {
            res += (counter[2] - mean);
            counter[0] += (counter[2] - mean);
            counter[2] -= (counter[2] - mean);
        }
        if (counter[1] > mean)
        {
            res += (counter[1] - mean);
            counter[2] += (counter[1] - mean);
            counter[1] -= (counter[1] - mean);
        }
        if (counter[0] > mean)
        {
            res += (counter[0] - mean);
            counter[1] += (counter[0] - mean);
            counter[0] -= (counter[0] - mean);
        }
    }
    cout << res << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    _TestCases_
        solve();

    return 0;
}
