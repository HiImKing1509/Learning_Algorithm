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
#include <set>
#include <list>

using namespace std;

#define MAX 1000000000
#define MIN -100000
#define ll long long

void SolveProblem()
{
	int n;
	cin >> n;
	if (n == 1)
		cout << 1;
	else
	{
		int floor = 0;
		int res = 0;
		while (res <= n)
		{
			floor++;
			res += floor * (floor + 1) / 2;
		}
		cout << floor - 1;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	//ll th;
	//cin >> th;
	//while (th--)
	SolveProblem();
	return 0;
}
