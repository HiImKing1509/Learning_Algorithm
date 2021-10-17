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
	
	int n;
	cin >> n;
	vector<int>a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];

	int x = 0;
	int y = n - 1;
	int sumSe = 0;
	int sumDi = 0;
	int loop = 0;
	while (x <= y)
	{
		if (loop % 2 == 0)
		{
			if (max(a[x], a[y]) == a[x])
			{
				sumSe += a[x];
				x++;
			}
			else
			{
				sumSe += a[y];
				y--;
			}
		}
		else
		{
			if (max(a[x], a[y]) == a[x])
			{
				sumDi += a[x];
				x++;
			}
			else
			{
				sumDi += a[y];
				y--;
			}
		}
		loop++;
	}
	cout << sumSe << " " << sumDi;
	return 0;
}
