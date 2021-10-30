#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>
#include <stack>
#include <cmath>
using namespace std;

typedef long long ll;
ll BinarySearch(vector<ll>& arr, ll xx)
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
int main()
{
    ll n, t;
    cin >> n >> t;
    vector<ll>a(n);
    vector<ll>b;

    a[0] = 0;
    for (ll i = 1; i < n; i++)
        cin >> a[i];

    ll vt_i = 1;
    while (vt_i < n)
    {
        ll res;
        res = vt_i + a[vt_i];
        vt_i = res;
        b.push_back(res);
    }
    sort(b.begin(), b.end());
    if (BinarySearch(b, t) != -1)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
