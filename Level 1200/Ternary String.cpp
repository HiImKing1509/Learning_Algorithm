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
bool SearchString(string arr)
{
    bool flag1 = false, flag2 = false, flag3 = false;
    for (ll i = 0; i < arr.size(); i++)
    {
        if (arr[i] == '1')
            flag1 = true;
        if (arr[i] == '2')
            flag2 = true;
        if (arr[i] == '3')
            flag3 = true;
    }
    if (flag1 && flag2 && flag3)
        return true;
    return false;
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

void SolveProblem()
{
    string s; cin >> s;
    ll len = s.size();
    vector<ll>a;
    ll firstIndex = -1;
    ll secondIndex = -1;
    bool flag = false;
    if (!SearchString(s)) cout << 0 << "\n";
    else
    {
        // 1
        for (ll i = 0; i < len; i++)
        {
            if (s[i] == '1')
                flag = true;
            else
            {
                if (firstIndex == -1)
                    firstIndex = i;
                else
                {
                    secondIndex = i;
                    if (secondIndex - firstIndex > 1 && s[secondIndex] != s[firstIndex] && flag)
                    {
                        a.push_back(secondIndex - firstIndex + 1);
                    }
                    firstIndex = secondIndex;
                }
                flag = false;
            }
        }
        // 2
        firstIndex = -1;
        secondIndex = -1;
        for (ll i = 0; i < len; i++)
        {
            if (s[i] == '2')
                flag = true;
            else
            {
                if (firstIndex == -1)
                    firstIndex = i;
                else
                {
                    secondIndex = i;
                    if (secondIndex - firstIndex > 1 && s[secondIndex] != s[firstIndex] && flag)
                    {
                        a.push_back(secondIndex - firstIndex + 1);
                    }
                    firstIndex = secondIndex;
                }
                flag = false;
            }
        }
        // 3
        firstIndex = -1;
        secondIndex = -1;

        flag = false;
        for (ll i = 0; i < len; i++)
        {
            if (s[i] == '3')
                flag = true;
            else
            {
                if (firstIndex == -1)
                    firstIndex = i;
                else
                {
                    secondIndex = i;
                    if (secondIndex - firstIndex > 1 && s[secondIndex] != s[firstIndex] && flag)
                    {
                        a.push_back(secondIndex - firstIndex + 1);
                    }
                    firstIndex = secondIndex;
                }
                flag = false;
            }
        }
        sortU(a);
        cout << a[0] << '\n';
    }
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
