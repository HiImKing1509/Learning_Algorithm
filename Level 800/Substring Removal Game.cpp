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
ll FirstGreaterElement(vector<ll>& arr, ll xx)
{
    ll len = arr.size() - 1;
    ll st = 0;
    ll ans = -1;
    while (st <= len)
    {
        ll mid = (st + len) / 2;
        if (arr[mid] < xx)
            st = mid + 1;
        else
        {
            ans = mid;
            len = mid - 1;
        }
    }
    return ans;
}
void SolveProblem()
{
    string s; cin >> s;
    vector<ll>count_one;
    ll first = -1;
    for (ll i = 0; i < s.size(); i++)
    {
        if (s[i] == '0')
        {
            if (i - first - 1 != 0)
                count_one.push_back(i - first - 1);
            first = i;
        }
        if (i == s.size() - 1 && i - first != 0)
            count_one.push_back(i - first);
    }
    
    sortD(count_one);
    ll sum = 0;
    for (ll i = 0; i < count_one.size(); i++)
    {
        if (!(i % 2))
            sum += count_one[i];
        else continue;
    }
    cout << sum << '\n';
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
