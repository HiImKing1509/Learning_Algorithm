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

#define MAX 100000
#define MIN -100000
#define ll long long

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	ll th;
	cin >> th;
	while (th--)
	{
		ll n;
		cin >> n;
		int c1 = 0, c2 = 0;
		while (n % 2 == 0)
		{
			n /= 2;
			c1++;
		}
		while (n % 3 == 0)
		{
			n /= 3;
			c2++;
		}
		if (n == 1 && c1 <= c2)
			cout << 2 * c2 - c1;
		else
			cout << -1;
		cout << "\n";
	}
	return 0;
}
