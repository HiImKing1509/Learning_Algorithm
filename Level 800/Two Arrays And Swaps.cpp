/*------------------------------------------------------------------------*
|    User: Huynh Viet Tuan Kiet                                           |
|    Degree: Student - Formal University                                  |
|    Study Computer Science at the University of Information Technology   |
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
int main()
{
    ll th;
    cin >> th;
    while (th--)
    {
        ll n, k;
        cin >> n >> k;
        vector<ll>a(n);
        vector<ll>b(n);
        for (ll i = 0; i < n; i++)
            cin >> a[i];
        for (ll i = 0; i < n; i++)
            cin >> b[i];

        sort(a.begin(), a.end());
        sort(b.rbegin(), b.rend());

        ll co = 1;
        ll sum = 0;
        for (ll i = 0; i < n; i++)
        {
            if (a[i] < b[i] && co <= k)
            {
                co++;
                swap(a[i], b[i]);
                sum += a[i];
            }
            else
                sum += a[i];
        }
        cout << sum << "\n";
    }
    return 0;
}
