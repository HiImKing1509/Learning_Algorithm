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
	int n;
	cin >> n;
	vector<int>a(2 * n);
	int c = 0;
	int m = 0;
	for (int i = 0; i < 2 * n; i++)
	{
		cin >> a[i];
		if (i % 2 != 0)
		{
			if (a[i] > a[i - 1])
				c++;
			else if (a[i] < a[i - 1])
				m++;
			else
			{
			}
		}
	}
	if (c > m)
		cout << "Chris";
	else if (c < m)
		cout << "Mishka";
	else
		cout << "Friendship is magic!^^";
	cout << "\n";
	return 0;
}
