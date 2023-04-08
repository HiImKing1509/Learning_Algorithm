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
    string a = "";
    for (ll i = 0; i < n; i++)
        a += "1001";
    for (ll i = 0; i < n; i++)
        a[i] = '0';
    reverse(a.begin(), a.end());
    vector<int>res;
    for (ll i = 0; i < 4 * n; i += 4)
    {
        string t = a.substr(i, 4);
        res.push_back(stoi(t, 0, 2));
        if (res.back() == 0)
            res.back() = 8;
    }
    for (ll i = 0; i < res.size(); i++)
        cout << res[i];
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    _TestCases_
        solve();

    return 0;
}
