#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>
#include <stack>
using namespace std;

typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
     
    ll n;
    cin >> n;
    vector<ll>a(n);

    bool check_Zero = false;
    ll sum = 0;
    ll dem = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == 0)
        {
            check_Zero = true;
            sum += 1;
        }
        else
        {
            if (a[i] < 0)
            {
                sum += abs(a[i]) - 1;
                dem++;
            }
            else
                sum += a[i] - 1;
        }
    }
    if (dem % 2 == 0)
        cout << sum;
    else
    {
        if (check_Zero == false)
            cout << sum + 2;
        else
            cout << sum;
    }

    return 0;
};
