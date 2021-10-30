/*------------------------------------------------------------------------*            
|    User: Huynh Viet Tuan Kiet                                           |
|    Degree: Student - Formal University                                  |
|    Study Computer Science at University of Information Technology       |
|    Country: Viet Nam                                                    |
|    City: Ho Chi Minh                                                    |
|    Organization: VNUHCM - UIT - University of Information Technology    | 
*-------------------------------------------------------------------------*/
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>
#include <stack>
#include <cmath>
using namespace std;

typedef long long ll;
void Prime(vector<bool>& a, ll num)
{
    a.resize(num + 1, true);
    a[0] = false;
    a[1] = false;

    for (ll i = 0; i <= sqrt(num); i++)
    {
        if (a[i])
        {
            for (ll j = i * i; j <= num; j += i)
            {
                a[j] = false;
            }
        }
    }
}
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
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    vector<bool>sieve;
    ll max = 1000000;
    Prime(sieve, max);
    ll n;
    cin >> n;
    vector<ll>a(n);
    vector<ll>b;
    for (ll i = 0; i < n; i++)
        cin >> a[i];
    for (ll i = 0; i < max; i++)
        if (sieve[i])
            b.push_back(i * i);
    ll k = 0;
    while (n--)
    {
        if (BinarySearch(b, a[k]) != -1)
            cout << "YES";
        else
            cout << "NO";
        cout << "\n";
        k++;
    }
    return 0;
}
