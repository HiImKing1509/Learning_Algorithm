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
		int n;
		cin >> n;
		if (n % 2 == 0)
			while (n > 0)
				cout << n-- << " ";
		else
		{
			int t = n;
			int g = n / 2 + 1;
			while (t > 0)
			{
				if (t != g)
					cout << t << " ";
				t--;
			}
			cout << g;
		}
		cout << "\n";
	}
	return 0;
}
