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
		if (n % 3 == 0)
			cout << n / 3 << " " << n / 3;
		else if (n % 3 == 1)
			cout << n / 3 + 1 << " " << n / 3;
		else
			cout << n / 3 << " " << n / 3 + 1;
		cout << "\n";
	}
	return 0;
}
