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
    ll th;
    cin >> th;
    while (th--)
    {
        ll n;
        cin >> n;
        ll sum = 3;
        ll i = 1;
        while (sum <= n)
        {
            if (n % sum == 0)
            {
                cout << n / sum;
                sum = n + 1;
            }
            else
            {
                i++;
                sum = sum + pow(2, i);
            }
        }
        cout << "\n";
    }
    return 0;
}
