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

ll BinarySearch(vector<ll>&arr, ll xx)
{
    ll left = 0;
    ll right = arr.size() - 1;
    while (left <= right)
    {
        ll mid = (left + right) / 2;

        if (arr[mid] == xx)
            return mid;
        if (arr[mid] > xx)
            right = mid - 1;
        if (arr[mid] < xx)
            left = mid + 1;
    }
    return -1;
}

void SolveProblem()
{
    ll n; cin >> n;
    vector<ll>a(n);
    vector<ll>stt(n + 1);
    for (ll i = 0; i < n; i++)
        cin >> a[i];

    vector<ll>one;
    vector<ll>two;
    one.push_back(a[0]);
    two.push_back(a[n - 1]);

    for (ll i = 1, j = n - 2; i < n, j >= 0; i++, j--)
    {
        one.push_back(a[i] + one.back());
        two.push_back(a[j] + two.back());
    }

    ll res = 0;
    ll remax = 0;
    for (ll i = n - 1; i >= 0; i--)
    {
        ll ress = BinarySearch(one, two[i]);
        if (ress != -1)
        {
            res = i + ress + 2;
            if (res <= n) break;
            else res = 0;
        }
    }
    cout << res << "\n";
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
