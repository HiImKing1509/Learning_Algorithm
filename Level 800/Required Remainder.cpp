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

#define MAX 100
#define MIN -1
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int th;
	cin >> th;
	while (th--)
	{
		ll x, y, n;
		cin >> x >> y >> n;

		ll div = n / x;
		ll res = div * x + y;
		while (res > n)
			res -= x;
		cout << res;
		cout << "\n";
	}

	return 0;
}
