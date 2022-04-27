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
    vector<ll>a(n + 1);
    vector<ll>pfa(n + 1);
    vector<ll>pfb(n + 1);
    a[0] = 0;
    pfa[0] = 0;
    pfb[0] = 0;
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (i == 1) pfa[i] = a[i];
        else pfa[i] = pfa[i - 1] + a[i];
    }

    vector<ll>b = a;
    sortU(b);

    for (ll i = 1; i <= n; i++)
    {
        if (i == 1) pfb[i] = b[i];
        else pfb[i] = pfb[i - 1] + b[i];
    }

    ll m; cin >> m;

    for (ll i = 1; i <= m; i++)
    {
        ll type, l, r;
        cin >> type >> l >> r;

        if (type == 1)
        {
            if (l == 1)
                cout << pfa[r] << endl;
            else
                cout << pfa[r] - pfa[l - 1] << endl;
        }
        else
        {
            if (l == 1)
                cout << pfb[r] << endl;
            else
                cout << pfb[r] - pfb[l - 1] << endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    //_TestCases_
        SolveProblem();

    return 0;
}

// Shortcut key for comment in Visual Studio 2019: Ctrl + K + C
// Shortcut key for uncomment in Visual Studio 2019: Ctrl + K + U
