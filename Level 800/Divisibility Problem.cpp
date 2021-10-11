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
		ll a, b;
		ll res;
		cin >> a >> b;
		if (a % b == 0)
			res = 0;
		else if (b > a)
			res = b - a;
		else
		{
			ll s = b * (a / b + 1);
			res = s - a;
		}
		cout << res << "\n";
	}
	return 0;
}
