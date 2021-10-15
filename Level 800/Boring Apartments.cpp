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

#define MAX 26
#define MIN -1
#define ll long long

int CountNumber(int k)
{
	int c = 0;
	while (k != 0)
	{
		k /= 10;
		c++;
	}
	return c;
}
int Ok(int t)
{
	if (t == 1)
		return 1;
	else if (t == 2)
		return 3;
	else if (t == 3)
		return 6;
	else
		return 10;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	int th;
	cin >> th;
	while (th--)
	{
		int x;
		cin >> x;
		cout << (x % 10 - 1) * 10 + Ok(CountNumber(x)) << "\n";
	}
	return 0;
}
