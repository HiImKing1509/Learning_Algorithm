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

#define MAX 4294967295
#define MIN -4294967295
#define ll long long

int main()
{
            ios_base::sync_with_stdio(false);
            cin.tie(0); cout.tie(0);

            int th;
            cin >> th;
            while (th--)
            {
                        int n;
                        cin >> n;
                        vector<int>a(n);

                        int c_pos = 0;
                        int c_neg = 0;
                        for (int i = 0; i < n; i++)
                        {
                                    cin >> a[i];
                                    if (a[i] % 2 == 0)
                                        c_pos++;
                                    else
                                        c_neg++;
                        }
                        if ((n == 1 && a[0] % 2 != 0) || (n % 2 == 0 && abs(c_neg - c_pos) != 0) || (n % 2 != 0 && (c_pos - c_neg) != 1))
                                    cout << -1;
                        else
                        {
                                    int vt1 = -1;
                                    int vt2 = -1;
                                    int res = 0;

                                    for (int i = 0; i < n; i++)
                                    {
                                                if (i % 2 != a[i] % 2 && vt1 == -1)
                                                            vt1 = i;
                                                if ((i % 2 != a[i] % 2) && vt2 == -1 && i != vt1)
                                                            vt2 = i;
                                                if (vt1 != -1 && vt2 != -1)
                                                {
                                                            swap(a[vt1], a[vt2]);
                                                            res++;
                                                            vt1 = -1;
                                                            vt2 = -1;
                                                }
                                    }
                                    cout << res;
                        }
                        cout << "\n";
            }
            return 0;
}
