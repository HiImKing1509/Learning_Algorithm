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
    
    float n, m, a, b;
    cin >> n >> m >> a >> b;

    if (m == 1)
    {
        if (n * a > n * b)
            cout << (int)n * (int)b;
        else
            cout << (int)n * (int)a;
    }
    else if ((b / m) >= a)
        cout << (int)n * (int)a;
    else
    {
        int ans = 0;
        int t = n / m;
        ans = t * (int)b;
        int tt = n - t * m;
        if (tt * a > b)
            ans += b;
        else
            ans += tt * a;
        cout << ans;
    }
    return 0;
}
