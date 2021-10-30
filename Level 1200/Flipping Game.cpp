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
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <cmath>
#include <set>
#include <list>
#include <map>

using namespace std;

#define MAX 1000000000
#define MIN -100000
#define ll long long

void SolveProblem()
{
	int n;
	cin >> n;
	int sum = 0, max = 0, one = 0, a;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (a == 0)
			sum++;
		else
		{
			one++;
			sum--;
		}
		if (sum < 0)
			sum = 0;
		if (sum > max)
			max = sum;
	}

	if (one == n)
		cout << n - 1;
	else
		cout << max + one;
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
