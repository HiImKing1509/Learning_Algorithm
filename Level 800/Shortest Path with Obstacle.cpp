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
 
    ll th;
    cin >> th;
    while (th--)
    {
        int xA, yA, xB, yB, xF, yF;
        cin >> xA >> yA >> xB >> yB >> xF >> yF;
        int xmax = max(xA, xB);
        int xmin = min(xA, xB);
        int ymax = max(yA, yB);
        int ymin = min(yA, yB);
        if (xA == xB)
        {
            if (xF == xA && ymin < yF && yF < ymax)
                cout << ymax - ymin + 2;
            else
                cout << ymax - ymin;
        }
        else if (yA == yB)
        {
            if (yF == yA && xmin < xF && xF < xmax)
                cout << xmax - xmin + 2;
            else
                cout << xmax - xmin;
        }
        else
            cout << abs(xA - xB) + abs(yA - yB);
        cout << "\n";
    }
    return 0;
}
