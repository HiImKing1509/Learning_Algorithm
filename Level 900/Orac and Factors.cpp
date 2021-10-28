#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <string>
using namespace std;

typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    ll th;
    cin >> th;
    while (th--)
    {
        ll n, k;
        cin >> n >> k;
        if (n % 2 == 0)
            cout << n + 2 * k;
        else
        {
            ll uoc = 0;
            for (ll i = 2; i <= n; i++)
            {
                if (n % i == 0)
                {
                    uoc = i;
                    i = n + 1;
                }
            }
            cout << n + 2 * (k - 1) + uoc;
        }
        cout << "\n";
    }
    return 0;
}
