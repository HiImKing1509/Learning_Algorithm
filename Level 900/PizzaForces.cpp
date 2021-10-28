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
		if (n <= 10)
		{
			if (n <= 6)
				cout << 15;
			else if (n <= 8)
				cout << 20;
			else
				cout << 25;
		}
		else if (n % 6 == 0 || n % 8 == 0 || n % 10 == 0)
		{
			if (n % 6 == 0)
				cout << n / 6 * 15;
			else if (n % 8 == 0)
				cout << n / 8 * 20;
			else
				cout << n / 10 * 25;
		}
		else
		{
			ll res = 0;
			ll t = n - n % 6;
			res += (t / 6) * 15;
			if (n % 6 == 1 || n % 6 == 2)
				res += 5;
			else if (n % 6 == 3 || n % 6 == 4)
				res += 10;
			else
				res += 15;
			cout << res;
		}
		cout << "\n";
	}
	return 0;
}
