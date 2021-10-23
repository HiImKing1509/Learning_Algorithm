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
        ll money;
        cin >> money;
        if (money < 10)
            cout << money;
        else
        {
            ll sum = 0;
            while (money >= 10)
            {
                int du = money % 10;
                ll sub_du = money - du;
                sum += sub_du;
                money = sub_du / 10 + du;
            }
            cout << sum + money;
        }
        cout << "\n";
    }
    return 0;
}
