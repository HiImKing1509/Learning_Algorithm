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
		ll w, h, n, res = 1;
		cin >> w >> h >> n;
		while (w % 2 == 0 || h % 2 == 0)
		{
			if (w % 2 == 0)
			{
				w /= 2;
				res *= 2;
			}
			else
			{
				h /= 2;
				res *= 2;
			}
		}
		if (res >= n)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}
