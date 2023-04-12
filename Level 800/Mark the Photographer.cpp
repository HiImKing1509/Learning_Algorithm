/*------------------------------------------------------------------------*
|    User: Huynh Viet Tuan Kiet                                           |
|    Degree: Student - Formal University                                  |
|    Study Computer Science at the University of Information Technology   |
|    Country: Viet Nam                                                    |
|    City: Ho Chi Minh                                                    |
|    Organization: VNUHCM - UIT - University of Information Technology    |
*-------------------------------------------------------------------------*/

#include <bits/stdc++.h>
// #include <vector>
// #include <iostream>

using namespace std;

#define _TestCases_ \
    ll tcs;         \
    cin >> tcs;     \
    while (tcs--)
#define db double
#define ld long double
#define ll long long
#define i64 __int64  // == ll
#define ull unsigned long long
#define ui64 unsigned __int64  // == unsigned ll
#define pq priority_queue
#define sortU(v) sort(v.begin(), v.end())
#define sortD(v) sort(v.rbegin(), v.rend())
#define pll pair<ll, ll>
#define psl pair<string, ll>
#define MOD 1e9 + 7

vector<ll> merge(vector<ll> a, vector<ll> b) {
    ll n = a.size();
    ll m = b.size();
    vector<ll> c(n + m);
    ll i = 0, j = 0, k = 0;

    while (i < n || j < m) {
        if (j == m || (i < n && a[i] < b[j])) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }
    return c;
}

vector<ll> merge_sort(vector<ll> a) {
    ll n = a.size();

    if (a.size() < 2) return a;

    vector<ll> b, c;
    for (ll i = 0; i <= n / 2 - 1; i++) b.push_back(a[i]);
    for (ll i = n / 2; i < n; i++) c.push_back(a[i]);

    b = merge_sort(b);
    c = merge_sort(c);

    return merge(b, c);
}

void solve() {
    ll n, x;
    cin >> n >> x;

    vector<ll> a(2 * n);
    for (ll i = 0; i < a.size(); i++) cin >> a[i];

    a = merge_sort(a);

    for (ll i = 0; i < n; i++) {
        if (a[n + i] - a[i] < x) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    _TestCases_ solve();
    return 0;
}
