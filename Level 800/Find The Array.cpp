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

#define MAX 4294967295
#define MIN -4294967295
#define ll long long
#define loop(i) for(ll i = 0; i < n; i++)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int th;
    cin >> th;
    while (th--)
    {
        int s;
        cin >> s;
        int i = 1;
        int co = 0;
        while (s > 0)
        {
            s -= i;
            co++;
            i += 2;
        }
        cout << co << "\n";
    }
    return 0;
}
