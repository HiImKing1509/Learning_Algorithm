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

void SolveProblem()
{
    ll n; cin >> n;
    
    vector<ll>a(n);
    vector<ll>count(n + 1, 0);
    vector<pll>pos(n + 1, make_pair(-1, -1));

    bool flag = false;

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        count[a[i]]++;
        if (count[a[i]] == 3) flag = true;
        if (pos[a[i]].first == -1) pos[a[i]].first = i;
        else if (pos[a[i]].second == -1) pos[a[i]].second = i;
        if (pos[a[i]].first != -1 and pos[a[i]].second != -1 and (pos[a[i]].second - pos[a[i]].first > 1)) flag = true;
    }

    if (flag) cout << "YES\n";
    else cout << "NO\n";
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
