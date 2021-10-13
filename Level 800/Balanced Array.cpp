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
        ios_base::sync_with_stdio(false);
        cin.tie(0); cout.tie(0);

        ll th;
        cin >> th;
        while (th--)
        {
                ll n;
                cin >> n;
                if ((n / 2) % 2 != 0)
                        cout << "NO";
                else
                {
                        cout << "YES\n";
                        for (ll i = 2; i <= n; i += 2)
                               cout << i << " ";
                        ll k = 1;
                        for (ll i = 1; i < n / 2; i++, k += 2)
                               cout << k << " ";
                        cout << n + n / 2 - 1;
                }
                cout << "\n";
         }
         return 0;
}
