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
    
    int n, k;
    cin >> n >> k;
    int tgk = 240 - k;
    int tong = n * (n + 1) / 2;
    int sum = 0;
    int vti = 0;
    if (5 * tong <= tgk)
        cout << n;
    else
    {
        for (int i = 1; i <= n; i++)
        {
            sum = sum + i * 5;
            if (sum > tgk)
            {
                vti = i - 1;
                i = n + 1;
            }
            else if (sum == tgk)
            {
                vti = i;
                i = n + 1;
            }
        }
        cout << vti;
    }
    return 0;
}
