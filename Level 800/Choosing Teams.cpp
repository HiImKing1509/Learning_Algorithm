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
      vector<int>a(n);
      int ans = 0;
      for (int i = 0; i < n; i++)
      {
            cin >> a[i];
            if (5 - a[i] >= k)
                  ans++;
      }
      cout << ans / 3;
      return 0;
}
