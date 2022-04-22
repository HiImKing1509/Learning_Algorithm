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

void clearQueue(queue<char> &q)
{
    queue<char> empty;
    swap(q, empty);
}

void SolveProblem()
{
    bool flag = true;
    ll n; cin >> n;
    vector<char>a(n);

    ll countB = 0;
    ll countR = 0;

    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 'W')
        {
            if (max(countB, countR) != 0 and min(countB, countR) == 0)
                flag = false;

            countB = 0;
            countR = 0;
        }
        else
        {
            if (a[i] == 'B') countB++;
            if (a[i] == 'R') countR++;
        }
        
        if (i == n - 1)
        {
            if (max(countB, countR) != 0 and min(countB, countR) == 0)
                flag = false;
        }
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
