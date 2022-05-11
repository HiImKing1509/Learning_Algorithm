/*------------------------------------------------------------------------*
|    User: Huynh Viet Tuan Kiet                                           |
|    Degree: Student - Formal University                                  |
|    Study Computer Science at the University of Information Technology   |
|    Country: Viet Nam                                                    |
|    City: Ho Chi Minh                                                    |
|    Organization: VNUHCM - UIT - University of Information Technology    |
*-------------------------------------------------------------------------*/

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
ll GCD(ll a, ll b)
{
    while (b)
    {
        a = a % b;
        swap(a, b);
    }
    return a;
}

ll sum(vector<vector<ll>>& a, ll n, ll m, ll r, ll c)
{
    ll rX, cX, rY, cY, rZ, cZ, rT, cT;
    rX = rY = rZ = rT = r;
    cX = cY = cZ = cT = c;

    ll sum = a[r][c];
    while ((rX >= 0 && cX >= 0) || (rY >= 0 && cY <= m - 1) || (rZ <= n - 1 && cZ <= m - 1) || (rT <= n - 1 && cT >= 0))
    {
        rX--;
        cX--;
        if (rX >= 0 && cX >= 0)
            sum += a[rX][cX];

        rY--;
        cY++;
        if (rY >= 0 && cY <= m - 1)
            sum += a[rY][cY];

        rZ++;
        cZ++;
        if (rZ <= n - 1 && cZ <= m - 1)
            sum += a[rZ][cZ];

        rT++;
        cT--;
        if (rT <= n - 1 && cT >= 0)
            sum += a[rT][cT];
    }
    return sum;
}

void SolveProblem()
{
    ll n, m; cin >> n >> m;
    vector<vector<ll>>a(n, vector<ll>(m));
    for (ll i = 0; i < n; i++)
        for (ll j = 0; j < m; j++)
            cin >> a[i][j];

    ll res = LLONG_MIN;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            res = max(res, sum(a, n, m, i, j));
        }
    }
    cout << res << '\n';
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
