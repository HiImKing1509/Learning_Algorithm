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


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int n;
    cin >> n;
    vector<int>a(n);
    int lc = 0;
    int vt_max = -1;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] > lc)
        {
            lc = a[i];
            vt_max = i;
        }
    }
    sort(a.begin(), a.end());
    cout << vt_max + 1 << " " << a[n - 2];
    return 0;
}
