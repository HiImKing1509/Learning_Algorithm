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
#define MAX 1000000000

typedef long long ll;
int main()
{
            ll th;
            cin >> th;
            while (th--)
            {
                        ll n;
                        cin >> n;
                        vector<ll>a(n);
                        vector<ll>b(n);

                        ll minA = MAX;
                        ll minB = MAX;

                        for (ll i = 0; i < n; i++)
                        {
                                    cin >> a[i];
                                    if (minA > a[i])
                                        minA = a[i];
                        }

                        for (ll i = 0; i < n; i++)
                        {
                                    cin >> b[i];
                                    if (minB > b[i])
                                        minB = b[i];
                        }
                        ll co = 0;
                        for (ll i = 0; i < n; i++)
                        {
                                    ll tA = a[i] - minA;
                                    ll tB = b[i] - minB;
                                    co = co + max(tA, tB);
                        }
                        cout << co << "\n";
            }
            return 0;
}
