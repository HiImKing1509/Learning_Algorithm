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

void quicksort(vector<ll> &a, ll left, ll right) {
    if (right - left < 1) return;
    ll pivot = a[right];
    ll m = left;

    for (ll i = left; i < right; i++)
        if (a[i] < pivot) swap(a[i], a[m++]);

    swap(a[m], a[right]);
    quicksort(a, left, m - 1);
    quicksort(a, m + 1, right);
}

void solve() {
    ll n, H;
    cin >> n >> H;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) cin >> a[i];
    quicksort(a, 0, n - 1);
    ll factor_1 = a.back();
    ll factor_2 = a[n - 2];

    ll mod = H % (factor_1 + factor_2);
    if (mod == 0)
        cout << H / (factor_1 + factor_2) * 2;
    else if (mod <= factor_1)
        cout << H / (factor_1 + factor_2) * 2 + 1;
    else
        cout << H / (factor_1 + factor_2) * 2 + 2;
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    _TestCases_ solve();
    // solve();
    return 0;
}
