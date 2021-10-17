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
		ll a, b;
		cin >> a >> b;
		if (a == b)
			cout << 0;
		else
		{
			if (a % 2 == b % 2)
			{
				if (a > b)
					cout << 1;
				else
					cout << 2;
			}
			else
			{
				if (a > b)
					cout << 2;
				else
					cout << 1;
			}
		}
		cout << "\n";
	}
	return 0;
}
