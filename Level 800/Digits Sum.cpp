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

int CountNumbers(int k)
{
	int c = 0;
	while (k != 0)
	{
		k /= 10;
		c++;
	}
	return c;
}
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
		int co = CountNumbers(n);
		if (co == 1)
		{
			if (n == 9)
				cout << 1;
			else
				cout << 0;
		}
		else if (co == 2 && 10 <= n && n <= 19)
		{
			if (n == 19)
				cout << 2;
			else
				cout << 1;
		}
		else
		{
			if (n % 10 == 9)
				cout << n / 10 + 1;
			else
			{
				while (n % 10 != 9)
					n--;
				cout << n / 10 + 1;
			}

		}
		cout << "\n";
	}
	return 0;
}
